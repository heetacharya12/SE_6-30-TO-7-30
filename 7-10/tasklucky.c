#include<stdio.h>
#include<conio.h>
void main()
{
    
    int i,num;
    int lucky = 69;
    int attempt = 0;
    
    do
    {
        printf("\nEnter a Number: ");
        scanf("%d", &num);

        
        if(num == lucky)
        {
            printf("Congratulations You Guessed the Right Number");
            break;
        }
        else if(num > lucky)
        {
            printf("Try with Lower Number");
        }
        else
        {
            printf("Try with Higher Number");
        }
        
        if(attempt == 5)
        {
            printf("\nGame Over");
        }
         attempt++;
    } 
    while(attempt < 5);
    
    getch();
}