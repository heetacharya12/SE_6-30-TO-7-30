#include<stdio.h>
#include<conio.h>
void main()
{
    int x,num,ans;
    
    printf(" ENTER ANY NUM = ");
    scanf("%d",&num);
    
    for(x=1;x<=10;x++)
    {
        ans = x*num;
        printf("\n %d * %d = %d ",num,x,ans);
    }
  getch();
}