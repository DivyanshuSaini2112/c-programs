#include <stdio.h>

// Function prototypes
float Quiz(); // Function to calculate average quiz score
float Midterm(); // Function to calculate average midterm score
char alphabetgrade(float total); // Function to determine letter grade based on total score

int main() {
    float QF; // Variable to store quiz final percentage
    float avg = Quiz(); // Calculate average quiz score

    QF = 3 * avg; // Calculate quiz final percentage
    printf("The final percentage of all the quiz is %.2f%%\n", QF);

    float mavg = Midterm(); // Calculate average midterm score

    int final;
    float MF, FF;

    printf("Enter your final exam marks (out of 100):\n");
    scanf("%d", &final); // Input final exam marks

    // Calculate weighted midterm and final marks based on the comparison
    if (final <= mavg) {
        MF = 0.5 * mavg;
        FF = 0.2 * final;
    } else {
        MF = 0.2 * mavg;
        FF = 0.5 * final;
    }

    float total = QF + MF + FF; // Calculate total course grade
    printf("The total course grade is %.2f%%\n", total);

    char grade = alphabetgrade(total); // Determine letter grade
    printf("Your grade is %c\n", grade);
}

// Function to calculate average quiz score
float Quiz() {
    int qmark[6], i, sum = 0;

    printf("Enter your marks for all 6 Quizzes (out of 10):\n");

    // Input marks for quizzes
    for (i = 0; i <= 5; i++) {
        printf("Quiz%d: ", i + 1);
        scanf("%d", &qmark[i]);
    }

    // Finding the minimum score index
    int minIndex = 0;
    for (int i = 0; i <= 5; i++) {
        if (qmark[i] < qmark[minIndex]) {
            minIndex = i;
        }
    }

    // Remove the lowest score
    for (i = minIndex; i <= 4; i++) {
        qmark[i] = qmark[i + 1];
    }

    // Calculate sum of remaining scores
    for (i = 0; i <= 4; i++) {
        sum += qmark[i];
    }

    float average = (float)sum / 5; // Calculate average score

    return average;
}

// Function to calculate average midterm score
float Midterm() {
    int mmark[3], i, sum = 0;

    printf("Enter your marks for all three Midterm exams (out of 100):\n");

    // Input marks for midterms
    for (i = 0; i <= 2; i++) {
        printf("Midterm%d: ", i + 1);
        scanf("%d", &mmark[i]);
    }

    // Calculate sum of midterm scores
    for (i = 0; i <= 2; i++) {
        sum += mmark[i];
    }

    float maverage = (float)sum / 3; // Calculate average midterm score

    return maverage;
}

// Function to determine letter grade based on total score
char alphabetgrade(float total) {
    if (total >= 90) {
        return 'A';
    } else if (total >= 80 && total < 90) {
        return 'B';
    } else if (total >= 70 && total < 80) {
        return 'C';
    } else if (total >= 60 && total < 70) {
        return 'D';
    } else {
        return 'E';
    }
}


