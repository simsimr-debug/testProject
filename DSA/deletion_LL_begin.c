#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void display(struct Node* first){
    printf("The elements in the linked list are: \n");
    struct Node* ptr = first;
    while(ptr != NULL){
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");


}


int main(){
    struct Node* start;
    struct Node* second;
    struct Node* third;

    start = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    start->data = 10;
    start->next= second;

    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = NULL;

    display(start);
    
    
    start->next=NULL;
    start=second;
    
    

    display(start);
   
    

    return 0;
  
}



