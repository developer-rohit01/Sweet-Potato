#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

/* PUSH OPERATION */
void push()
{
    int value;

    if (top == MAX - 1)
    {
        printf("\nStack Overflow! Cannot push more elements.\n");
        return;
    }

    printf("Enter value to push: ");
    scanf("%d", &value);

    stack[++top] = value;

    printf("Element %d pushed successfully.\n", value);
}

/* POP OPERATION */
void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow! Stack is empty.\n");
        return;
    }

    printf("Popped element: %d\n", stack[top--]);
}

/* PEEK OPERATION */
void peek()
{
    if (top == -1)
    {
        printf("\nStack is empty.\n");
        return;
    }

    printf("Top element is: %d\n", stack[top]);
}

/* DISPLAY OPERATION */
void display()
{
    if (top == -1)
    {
        printf("\nStack is empty.\n");
        return;
    }

    printf("\nStack elements are:\n");

    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n\n===== STACK MENU =====");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}