#include<stdio.h>
#include<conio.h>
int main()
{
    float Pi = 3.14;
    float r;
    {
    printf("Area of circle is = ");
    scanf("%f",&r);
    }
    
    float ans = Pi*r*r; // ans is veriable float is data type 
    printf("Area of circle is %f = ",ans );

	getch();
}
