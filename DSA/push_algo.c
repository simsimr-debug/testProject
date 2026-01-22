#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int item){
    if (top == MAX-1){
        printf("Stack overflow cant push %d\n",item);
    }
    else {
        top++;
        stack[top] = item;
        printf("%d pushed into stack\n",item);
    }

}

void pop(){
    if(top == -1){
        printf("stack underflow");
    }
    else{
        int item = stack[top];
        top--;
        printf("%d removed\n",item);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void main(){
    push(20);
    push(23);
    push(56);
    push(78);
    push(67);
    push(45);

    pop();

    display();

}