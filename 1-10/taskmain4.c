#include <stdio.h>
#include<conio.h>
int main() {
    float a, b, area;

    // User input
    printf("Enter the base of the triangle: ");
    scanf("%f", &a);

    printf("Enter the height of the triangle: ");
    scanf("%f", &b);

    // Area calculation
    area = 0.5 * a * b;

    // Output
    printf("\nArea of Triangle = %f", area);

    getch();
}