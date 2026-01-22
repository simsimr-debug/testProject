#include<stdio.h>
int main()
{
    int i,min,max;
    int arr1[4] = {1,2,3,4};
    min = arr1[0];
    max = arr1[0];
    for(i=0;i<4;i++)
    {
        if(min > arr1[i])
       {
         min = arr1[i];
       }
       if(max < arr1[i])
       {
        max = arr1[i];
       }
       
    }

    printf("The minimum value is: %d\n",min);
    printf("the maximum value is: %d",max);

    return 0;


}