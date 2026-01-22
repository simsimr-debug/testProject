#include<stdio.h>
#define MAX 5

int queue[MAX];
int rear, front = -1;


void enqueue(int item){
    if(rear == MAX-1){
        printf("queue overflow");
           
    }
    else{
    if(front==-1){
        front = 0;
    }
    else{
         rear++;
        queue[rear]= item;
        printf("the inserted item is  %d\n",item);
    }
 }
}

void main(){
    enqueue(50);
    enqueue(40);
    enqueue(45);
    enqueue(60);
    enqueue(20);
    enqueue(67);
}



