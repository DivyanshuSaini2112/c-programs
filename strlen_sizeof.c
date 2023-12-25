#include<stdio.h>
#include<string.h>
//comparision between strlen() and sizeof operator
int main()
{
char str;
printf("Enter a string:");
gets(str);
printf("Length of string is %d\n",strlen(str));
printf("Size of string is %d\n",sizeof(str));
}
