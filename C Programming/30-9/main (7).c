#include<stdio.h>
#include<conio.h>
void main()
{
    int princi=100000,y=5;
    float roi=10;
    
    float intrest = princi*roi*y/100;
    float total = princi+intrest;
    printf("Total Amount is %f",total);
    
   
    getch();
}