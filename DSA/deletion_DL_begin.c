#include<stdio.h>
#include<stdlib.h> 
//hey there
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

void display(struct Node* ptr){
    printf("The element is the list are: \n");
    
    while(ptr !=NULL){
        printf("%d-> ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main(){
    struct Node* start = (struct Node*) malloc(sizeof(struct Node));
    struct Node* second = (struct Node*) malloc(sizeof(struct Node));
    struct Node* third = (struct Node*) malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*) malloc(sizeof(struct Node));

    start->data= 10;
    start->next=second;
    start->prev= NULL;

    second->data= 20;
    second->next=third;
    second->prev=start;

    third->data= 30;
    third->next=fourth;
    third->prev= second;

    fourth->data = 40;
    fourth->next= NULL;
    fourth->prev= third;

    display(start);

    
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* ptr1 = (struct Node*) malloc(sizeof(struct Node));
    
    ptr = start;
    start= ptr->next;
    start->prev=NULL;
    free(ptr);

    
    display(start);
    

}