#include<stdio.h>
void main()
{
    int i, arr[6] = {1,2,3,4,5,6};
    for(i=0;i<6;i++)
    {
        printf("%d",arr[i]);
    }
printf("\n");
    for(i=5;i>-1;i--)
    {
        printf("%d",arr[i]);
    }
}