#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=10;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}