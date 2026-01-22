#include <stdio.h>
int Factorial(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    return(n*Factorial(n-1));
}
void main()
{
   int n = 4;
   int Factorial(n);
   printf("%d",Factorial(n));

}