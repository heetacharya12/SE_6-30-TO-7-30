#include <stdio.h>
#include <conio.h>

int main() {
    float P, R, T, i;

    // User input
    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    // Simple Interest calculation
    i = (P * R * T) / 100;

    // Output
    printf("\nSimple Interest = %.2f\n", i);

    getch();
}