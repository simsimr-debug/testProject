#include<stdio.h>

int queue[3] = {50,80,35};
int front = 0;
int rear = 2;

void dequeue(){
    if (front == -1 || front > rear){
        printf("queue underflow!\n");
    }
    else{
       
       int item = queue[front];
       printf("the deleted item is  %d\n", item);
       front++;
       

       }
    }

void main(){
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}