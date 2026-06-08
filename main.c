#include <stdio.h>

int main() {
    int maths, science, english;
    int total, highest;
    float average;
    char grade;

    // Input marks
    printf("Enter Mathematics mark: ");
    scanf("%d", &maths);

    printf("Enter Science mark: ");
    scanf("%d", &science);

    printf("Enter English mark: ");
    scanf("%d", &english);

    // total and average
    total = maths + science + english;
    average = total / 3.0;

    // finding grade
    if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';
    //highest subject mark
    highest = maths;

    if (science > highest)
        highest = science;

    if (english > highest)
        highest = english;

    // Display results
    printf("\nTotal: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);
    printf("Highest Mark: %d\n", highest);


    // Pass / Fail
    if (maths >= 40 && science >= 40 && english >= 40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");
    // Distiction
    if (average >= 85 && maths >= 80 && science >= 80 && english >= 80)
    {printf("Award: DISTINCTION\n");}

    return 0;
}
