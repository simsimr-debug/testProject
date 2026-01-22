#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Function to push an element to the stack

void push(int item) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = item;
}

// Function to pop an element from the stack

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Function to evaluate the postfix expression using STACK
int evaluatePostfix(char* postfix)

                                     // char* postfix- 	The parameter passed to the function. 
                                    //It's a pointer to a character array — essentially a string in C 
                                    //— that contains the postfix expression to be evaluated.
{
    int i = 0;
    while (postfix[i] != '\0') //This is a loop that goes through each character in the postfix string.

  //It continues until it reaches the null terminator ('\0'), which marks the end of the string.

  //i is the index used to access each character.

    {
        char ch = postfix[i]; // stores the current character from the postfix expression into the variable ch

        if (ch == ' ' || ch == '\n') {
            i++;
            continue;  // Skip spaces and newline characters
        }

        if (isdigit(ch))  //This checks whether the character ch is a digit (i.e., '0' to '9').
        {
            int num = 0;
            // Handle multi-digit numbers
            
            while (isdigit(postfix[i])) //This loop continues as long as the current character is a digit.
            {
                num = num * 10 + (postfix[i] - '0');//postfix[i] - '0' converts the character digit to its integer value.
                              
                i++;
            }
            
            //num = num * 10 + ... builds the number digit by digit:

                            //For example, if the input is "123", it goes:

                                //num = 0 * 10 + 1 = 1

                                //num = 1 * 10 + 2 = 12

                                //num = 12 * 10 + 3 = 123
            push(num); //// Push operand to stack
        } 
        else 
        {
            // Operator encountered
            // Pop two operands from stack
            int top1 = pop();
            int top2 = pop();
            int result;

            switch (ch) {
                case '+': result = top2 + top1;
                          break;
                case '-': result = top2 - top1; 
                          break;
                case '*': result = top2 * top1; 
                          break;
                case '/': 
                    if (top1 == 0)
                    {
                        printf("Division by zero-error\n");
                        exit(1);
                    }
                    result = top2 / top1; 
                    break;
                    
                default:
                    printf("Invalid operator: %c\n", ch);
                    exit(1);
            }
            push(result);
            i++;
        }
    }

    if (top != 0) {
        printf("Error: too many operands or too few operators\n");
        exit(1);
    }

    return pop();
}

int main()

{
    char postfix[MAX];
    int result;

    printf("Enter Postfix Expression: ");
    fgets(postfix, MAX, stdin);

    result = evaluatePostfix(postfix);
    printf("Result of Postfix expression is: %d\n", result);

    return 0;
}
