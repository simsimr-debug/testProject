#include<stdio.h>

int queue[100], n, i, item, choice;
int rear = -1;
int front = -1;

void enqueue();
void dequeue();
void display();


int main(){
    printf("\nEnter the size of queue  ");
    scanf("%d",&n);
    printf("\n\t1.Enqueue \n\t2.Dequeue  \n\t3.Display \n\t4.Exit");
    

    do{
        printf("\nEnter the choice");
        scanf("%d",&choice);
       
        switch (choice)
        {
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
    //return 0

    
}

void enqueue() {
        if(rear==n-1){
            printf("\nQueue overflow");
        }
        else{
            if(front==-1){
                front = 0;
            }
            printf("\nEnter the element to be inserted");
            scanf("%d",&item);
            rear++;
            queue[rear] = item;

        }
    }

    void dequeue(){
        if(rear == -1){
            printf("\nQueue underflow");
            return;
        }
        else{
            printf("\nElement to be deleted is %d",queue[front]);
            front++;
        }

    }


    void display(){
        if (front == -1){
            printf("\nqueue is empty");

        }
        else{
            printf("\nElements in Queue are: ");
            for(i=front;i<=rear;i++){
                printf("\n%d",queue[i]);
            }
            printf("\n");
        }
    }

