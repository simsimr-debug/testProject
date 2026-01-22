#include<stdio.h>
void main()
{
    int arr[3] = {11,16,13};
    int *ptr = &arr[0];

    for(int i=0;i<3;i++)
    {
        printf("%d\n",&arr[i]);
    }

}
