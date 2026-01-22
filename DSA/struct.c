#include<stdio.h>
#include<string.h>

struct Student {

    char name[50];
    int roll_no;
    float marks;

};
void main() {
   struct Student s1;
    strcpy(s1.name, "Simran");
    s1.roll_no = 567;
    s1.marks = 90;
    printf("name: %s\n",s1.name);
    printf("roll no: %d\n",s1.roll_no);
    printf("marks: %f\n",s1.marks);

}