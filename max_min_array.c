#include<stdio.h>
void main()
{
    int i, arr[5] = {1,2,3,4,5};
    int max = arr[i];
    int min = arr[i];

    for(i=0;i<5;i++)
    {
        if(min > arr[i])
        
            min = arr[i];
        
        if(max < arr[i])
        
            max = arr[i];
        
    }
    printf("the maximum value is: %d\n",max);
    printf("the minimum value id: %d",min);
}