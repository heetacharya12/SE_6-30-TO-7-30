#include<stdio.h>
#include<conio.h>

int main() {
    int num;
    
    // User input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Square and Cube
    int square = num * num;
    int cube   = num * num * num;
    
    // Output
    printf("\nSquare of %d = %d", num, square);
    printf("\nCube of %d   = %d", num, cube);
    
    getch();
}