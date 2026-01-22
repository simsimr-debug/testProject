#include<stdio.h>

void main()
{
  int i,j;

  int arr1[2][2] = {1,2,3,4};
  int arr2[2][2];

  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
        arr2[i][j] = arr1[j][i];
    }
  }

  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
        printf("%d  ",arr2[i][j]);
    }
    printf("\n");
  }
}
