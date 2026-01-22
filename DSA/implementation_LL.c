#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* start = NULL;  // global head pointer

// Function to display the list
void display() {
    struct Node* ptr = start;
    if (ptr == NULL) {
        printf("\nList is empty!\n");
        return;
    }

    printf("\nLinked List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Insert at beginning
void insertAtBeginning() {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to insert: ");
    scanf("%d", &temp->data);
    temp->next = start;
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
        start = temp;
    } else {
        struct Node* ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
    printf("Node inserted at end!\n");
}

// Insert at specific position
void insertAtPosition() {
    int pos, i;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter data to insert: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (pos < 1) {
        printf("Invalid position!\n");
        free(temp);
        return;
    }

    if (pos == 1) {
        temp->next = start;
        start = temp;
        printf("Node inserted at position 1!\n");
        return;
    }

    struct Node* ptr = start;
    for (i = 1; i < pos - 1 && ptr != NULL; i++) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Position out of range!\n");
        free(temp);
    } else {
        temp->next = ptr->next;
        ptr->next = temp;
        printf("Node inserted at position %d!\n", pos);
    }
}

// Delete from beginning
void deleteFromBeginning() {
    if (start == NULL) {
        printf("List is empty, nothing to delete!\n");
        return;
    }
    struct Node* temp = start;
    start = start->next;
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Delete from end
void deleteFromEnd() {
    if (start == NULL) {
        printf("List is empty, nothing to delete!\n");
        return;
    }

    struct Node* ptr = start;
    struct Node* prev = NULL;

    // If only one node
    if (ptr->next == NULL) {
        printf("Deleted node with data: %d\n", ptr->data);
        free(ptr);
        start = NULL;
        return;
    }

    // Move to second last node
    while (ptr->next != NULL) {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = NULL;
    printf("Deleted node with data: %d\n", ptr->data);
    free(ptr);
}

// Delete from specific position
void deleteFromPosition() {
    int pos, i;
    if (start == NULL) {
        printf("List is empty, nothing to delete!\n");
        return;
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }

    struct Node* ptr = start;
    if (pos == 1) {
        start = start->next;
        printf("Deleted node with data: %d\n", ptr->data);
        free(ptr);
        return;
    }

    struct Node* prev = NULL;
    for (i = 1; i < pos && ptr != NULL; i++) {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Position out of range!\n");
    } else {
        prev->next = ptr->next;
        printf("Deleted node with data: %d\n", ptr->data);
        free(ptr);
    }
}

// Main function
int main() {
    int choice;
    printf("\n--- Singly Linked List Menu ---\n");
    printf("1. Insert at Beginning\n");
    printf("2. Insert at End\n");
    printf("3. Insert at Specific Position\n");
    printf("4. Delete from Beginning\n");
    printf("5. Delete from End\n");
    printf("6. Delete from Specific Position\n");
    printf("7. Display\n");
    printf("8. Exit\n");
    
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
                deleteFromBeginning();
                break;
            case 5:
                deleteFromEnd();
                break;
            case 6:
                deleteFromPosition();
                break;
            case 7:
                display();
                break;
            case 8:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}