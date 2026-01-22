#include<stdio.h>
#define SIZE 100

int queue[SIZE], n, i, item, choice;
int rear = -1;
int front = -1;

void enqueue();
void dequeue();
void display();

int main(){
    printf("\nEnter the size of queue");
    scanf("%d",&n);
    printf("\n\t1.Enqueue \n\t2.Dequeue \n\t3.Display \n\t4.Exit");

    do{
        printf("\nEnter the choice ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("\nEXIT");
            break;

            default:
            printf("\nInvalid choice");

        }
    }

    while(choice != 4);
    return 0;
}

void enqueue(){
    if((rear+1)%n==front){
        printf("\nQueue overflowed!");
        return;
    } 
    printf("Enter the element to be inserted ");
    scanf("%d",&item);
    if(front == -1){
        front = rear = 0;
    }
    else{
        rear = (rear+1)%SIZE;
    }

    queue[rear]=item;
}

void dequeue(){
     if (front==-1 && rear==-1){
        printf("\nqueue underflow");
        return;
    }
    item = queue[front];
    printf("\n%d deleted from queue",item);
    if(front==rear){
        front=rear=-1; //single element left
    }
    else{
        front = (front+1)%SIZE;
    }

}

void display(){
    if (front == -1){
        printf("\nqueue is empty");
    }
    else{
        printf("\nElements in the queue are: ");
        for(i=front;i!=rear;i=(i+1)%n){
            printf("\n%d",queue[i]);
        }
        printf("\n");
    }
    printf("%d\n",queue[rear]);// tp print last element of cqueue

}
