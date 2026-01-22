#include<stdio.h>

void main()
{
    int a,b,c;
    printf("enter the number1  ");
    scanf("%d",&a);
    printf("enter the number2  ");
    scanf("%d",&b);
    printf("enter the number3  ");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("a is the greatest");        
    }
    else if(b>a && b>c)
    {
        printf("b is the greatest");
    }
    else
    {
        printf("c is the greatest");
    }


}