#include<stdio.h>
#include<conio.h>

int main() {
    int num;

    // User input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check Positive, Negative, or Zero
    if(num > 0) {
        printf("%d is Positive\n", num);
    } else if(num < 0) {
        printf("%d is Negative\n", num);
    } else {
        printf("The number is Zero\n");
    }

    getch();
}