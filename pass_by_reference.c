#include<stdio.h>

int PassByReference(int *x)
{
    *x = 20;
    printf("%d\n",*x);
}
 
 
int main()
{
    int a = 10;
    PassByReference(&a);
    printf("%d",a);

    return 0;
}

