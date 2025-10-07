#include <stdio.h>
#include <conio.h>
int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) 
        printf("%d is a Leap Year", year);
    else
        printf("%d is Not a Leap Year", year);
        
        getch();
        
        }