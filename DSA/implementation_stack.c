#include<stdio.h>

int stack[10], top, item, n, i, choice;//n = size of stack, item = element to be inserted/deleted

void push();
void pop();
void display();

int main(){
    top = -1;
    printf("\nEnter the size of stack:  ");
    scanf("%d",&n);
    printf("\nStack implementation using arrays");
    printf("\n\t1.PUSH \n\t2.POP \n\t3.DISPLAY \n\t4.EXIT");

    do {
        printf("\nEnter the choice:  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                push();
                break;
            
            case 2: 
                pop();
                break;
            
            case 3: 
                display();
                break;
            
            case 4: 
                printf("\nEXIT");
                break;
            
            default:

                printf("\n\tInvalid option.Please enter valid option.");
            

        }
    }

    while(choice != 4);
        return 0;
    
}

void push(){
    if (top>=n-1){
        printf("\nstack overflow");
    }
    else{
        printf("\nEnter the element to be inserted: ");
        scanf("%d",&item);
        top++;
        stack[top] = item;
        printf("%d is pushed into stack\n",item);
    }
}

void pop(){
    if (top<=-1){
        printf("\nStack underflow!");
    }
    else{
        printf("\nThe deleted element from the stack is %d",stack[top]);
        top--;
    }
}

void display(){
    if(top>=0){
        printf("\nElements in the stack are: \n");
        for(i=top;i>=0;i--){
            printf("\n%d",stack[i]);
            
        }
       
    }
     else{
            printf("\nthe stack is empty");
        }
}

