#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>
#include <string.h>

void printFileDetails(struct dirent *file, const char *path) {
    char fileName[256];
    struct stat fileStat;
    sprintf(fileName, "%s/%s", path, file->d_name);

    if (stat(fileName, &fileStat) == 0) {
        printf("Name: %s\n", file->d_name);
        if (S_ISDIR(fileStat.st_mode)) {
            printf("Type: Directory\n");
        } else {
            printf("Type: File\n");
            printf("Size: %ld bytes\n", fileStat.st_size);
        }
        printf("Last modified: %s", ctime(&fileStat.st_mtime));
        printf("------------------------------------\n");
    } else {
        printf("Failed to get details for %s\n", file->d_name);
    }
}

void listFilesRecursively(const char *basePath, const char *searchTerm, const char *extension, long minSize, long maxSize, long *totalSize) {
    struct dirent *de;
    DIR *dr = opendir(basePath);

    if (dr == NULL) {
        printf("Could not open directory %s\n", basePath);
        return;
    }

    printf("Listing for directory: %s\n", basePath);

    while ((de = readdir(dr)) != NULL) {
        if (strcmp(de->d_name, ".") != 0 && strcmp(de->d_name, "..") != 0) {
            if ((strstr(de->d_name, searchTerm) != NULL) && (extension == NULL || strstr(de->d_name, extension) != NULL)) {
                char fileName[256];
                sprintf(fileName, "%s/%s", basePath, de->d_name);
                struct stat fileStat;
                if (stat(fileName, &fileStat) == 0) {
                    if (S_ISDIR(fileStat.st_mode)) {
                        printFileDetails(de, basePath);
                    } else if ((fileStat.st_size >= minSize || minSize == -1) && (fileStat.st_size <= maxSize || maxSize == -1)) {
                        printFileDetails(de, basePath);
                        if (extension == NULL || strstr(de->d_name, extension) != NULL) {
                            *totalSize += fileStat.st_size;
                        }
                    }
                }
            }

            if (de->d_type == DT_DIR) { // Check if it's a directory
                char path[256];
                sprintf(path, "%s/%s", basePath, de->d_name);
                listFilesRecursively(path, searchTerm, extension, minSize, maxSize, totalSize); // Recursive call for subdirectories
            }
        }
    }

    closedir(dr);
}

int main() {
    char searchTerm[100];
    char extension[10];
    long minSize, maxSize;

    printf("Enter the search term: ");
    scanf("%s", searchTerm);

    printf("Enter the file extension (leave blank for any): ");
    scanf("%s", extension);

    printf("Enter the minimum file size (-1 for any): ");
    scanf("%ld", &minSize);

    printf("Enter the maximum file size (-1 for any): ");
    scanf("%ld", &maxSize);

    long totalSize = 0;
    listFilesRecursively(".", searchTerm, extension[0] != '\0' ? extension : NULL, minSize, maxSize, &totalSize); // Start searching from the current directory

    printf("Total size of matching files: %ld bytes\n", totalSize);

    return 0;
}


