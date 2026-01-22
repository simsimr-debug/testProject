#include<stdio.h>
int main()
{
    int a = 10;

    PassByValue(a);
    printf("%d\n",a);

    return 0;
}

void PassByValue(int x)
{
    x = 20;
    printf("%d\n",x);
}