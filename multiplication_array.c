#include<stdio.h>
void main()
{
    int m1[2][2] = {1,2,3,4};
    int m2[2][2] = {1,2,3,4};

    int result[2][2];
    int i,j,k;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          int sum = 0;

          for(k=0;k<2;k++)
        {
         
         sum = sum + (m1[i][k]*m2[k][j]);

        }

        result[i][j] = sum;
        
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
    }


}