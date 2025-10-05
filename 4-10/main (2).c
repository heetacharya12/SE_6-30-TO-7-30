#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf(" \n press 1 for English \n press 2 for hindi \n press 3 for gujrati\n\n enter any num : ");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:printf("\n Your language is English");
        break;
        case 2:printf("\n Your language is hindi");
        break;
        case 3:printf("\n Your language is gujrati");
        break;
        default:printf("\n number is not valid");
        break;
    }
    getch();
}