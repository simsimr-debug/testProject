#include<stdio.h>
#include<string.h>
struct employee
{
    int employee_id;
    char address[5];
    long int mobile_no;

}Riya;

void main()
{
    //struct employee Riya;
    Riya.employee_id = 101;
    strcpy(Riya.address, "INDIA");
    Riya.mobile_no = 9015302169;
    printf("%d\n",Riya.employee_id);
    printf("%s",Riya.address);
}