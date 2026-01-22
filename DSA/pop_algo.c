#include<stdio.h>
#define MAX 5

int stack[MAX] = {10,20,30,40,50};
int top = 4;

void pop(){
    
    if(top<=-1){
        printf("stack underflowed!\n");
        
    }
    else{
        int item = stack[top];
        top--;
        printf("element is deleted %d\n",item);
    }

}

int main(){
    pop();
    return 0;
}