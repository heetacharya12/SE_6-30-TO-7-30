
#include<stdio.h>
#include<conio.h>
void main()
    
    {
        
        int i,num,a = 1;
        
        printf("Enter a Number for factorial: ");
        scanf("%d", &num);
        
        
        for(i = 1; i <= num; i++)
        {
            a = a * i;
        }
        
        printf("\nFactorial of %d is: %d", num,a);
        
        getch();
    }