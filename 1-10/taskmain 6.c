#include<stdio.h>
#include<conio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float sum, percentage;

    // User input
    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks for Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter marks for Subject 5: ");
    scanf("%f", &sub5);

    // Sum and Percentage calculation
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (sum / 500) * 100;

    // Output
    printf("\nTotal Marks = %f", sum);
    printf("\nPercentage  = %f", percentage);

    return 0;
}