#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* start = NULL;  // head pointer

// Function to display the list
void display() {
    struct Node* ptr = start;
    if (ptr == NULL) {
        printf("\nList is empty!\n");
        return;
    }
    printf("\nDoubly Linked List: ");
    while (ptr != NULL) {
        printf("%d <-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Insert at beginning
void insertAtBeginning() {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to insert: ");
    scanf("%d", &temp->data);
    temp->prev = NULL;
    temp->next = start;
    if (start != NULL)
        start->prev = temp;
    start = temp;
    printf("Node inserted at beginning!\n");
}

// Insert at end
void insertAtEnd() {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to insert: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (start == NULL) {
        temp->prev = NULL;
        start = temp;
    } else {
        struct Node* ptr = start;
        while (ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = temp;
        temp->prev = ptr;
    }
    printf("Node inserted at end!\n");
}

// Insert in between (specific position)
void insertAtPosition() {
    int pos, i = 1;
    printf("Enter position to insert: ");
    scanf("%d", &pos);

    if (pos <= 1) {
        insertAtBeginning();
        return;
    }

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to insert: ");
    scanf("%d", &temp->data);

    struct Node* ptr = start;
    while (ptr != NULL && i < pos - 1) {
        ptr = ptr->next;
        i++;
    }

    if (ptr == NULL) {
        printf("Position out of range, inserting at end instead.\n");
        insertAtEnd();
        free(temp);
        return;
    }

    temp->next = ptr->next;
    temp->prev = ptr;

    if (ptr->next != NULL)
        ptr->next->prev = temp;

    ptr->next = temp;
    printf("Node inserted at position %d!\n", pos);
}




int main() {
    int choice;
        printf("\n--- Doubly Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Display\n");
        printf("5. Exit\n");
    while (1) {
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertAtBeginning();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                insertAtPosition();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
