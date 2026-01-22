#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void display(struct Node* ptr){
    printf("\nThe elements in the linked list are: \n");
    while(ptr != NULL){
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct Node* start;
    struct Node* second;
    struct Node* third;
    struct Node* temp;

    start = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    temp = (struct Node*) malloc(sizeof(struct Node));

    start->data=10;
    start->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;

    display(start);

    temp->data=15;
    temp->next = second->next;
    second->next=temp;
    display(start);


}