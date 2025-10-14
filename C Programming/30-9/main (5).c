#include<stdio.h>
#include<conio.h>
void main()
{
    int math = 99;
    int sci = 100;
    int hindi = 45;
    int eng = 54;
    int guj = 65;
    
    int total = math+sci+hindi+eng+guj;
    printf("\n Total is  %d ",total);
    
    float per = total/5;
    printf("\n Percentage is %f ",per);
    
    getch();
}