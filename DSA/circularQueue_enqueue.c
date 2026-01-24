#include<stdio.h>
#define MAX 5

int cqueue[MAX];
int rear = -1, front = -1;

void enqueue(int item){
    if((rear+1)%MAX==front){
        printf("queue overflowed!\n");
        return;
    }
    if(front== -1 && rear == -1){
            front = rear = 0;
        }
     else{
            rear = (rear+1)%MAX;
            
        }
        cqueue[rear]= item;
            printf("the inserted item is %d\n",item);
            //fibonacci change

    
}

int main(){
    enqueue(56);
    enqueue(45);
    enqueue(56);
    enqueue(67);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    return 0;
}
