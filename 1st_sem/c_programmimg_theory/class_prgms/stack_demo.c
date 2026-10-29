#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

// Function to push data into the stack
void push(int newdata, int size)
{
    if (top == size - 1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        top++;
        stack[top] = newdata;
        printf("Data pushed successfully.\n");
    }
}

// Function to pop data from the stack
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        printf("Popped data: %d\n", stack[top]);
        top--;
    }
}

// Function to display stack elements
void display_stack()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

// Main function
int main()
{
    int option, mydata;

    do
    {
        printf("\n1. Push data\n");
        printf("2. Pop data\n");
        printf("3. Display stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                printf("Enter the stack data: ");
                scanf("%d", &mydata);
                push(mydata, SIZE);
                break;

            case 2:
                pop();
                break;

            case 3:
                display_stack();
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (option != 4);

    return 0;
}