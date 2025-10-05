#include<stdio.h>
#include<conio.h>
void main()
{
    char x;

    printf("ENTER ANY ALPHABATE=> ");
    scanf("%c",&x);
    
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
    {
    printf("ALPHABATE IS VOWEL");
    }
    else
    {
    printf(" ALPHABATE is CONSTANT");
    }
    
    getch();
}