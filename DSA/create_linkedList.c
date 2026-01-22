#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
    
};

void display(struct Node* ptr){
    
    while(ptr != NULL){
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    
    printf("NULL\n");

}

int main(){
    struct Node* start;
    start = (struct Node*) malloc(sizeof(struct Node));

    struct Node* second;
    second = (struct Node*) malloc(sizeof(struct Node));

    struct Node* third;  
    third = (struct Node*) malloc(sizeof(struct Node));

    start->data = 10;
    start->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next= NULL;

    printf("The elements in the linked list are: \n");

    display(start);
    
    return 0;

}