#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *top = NULL;  // Top of stack

int is_empty() {
    return top == NULL;
}

void push(int val) {
    Node *p = (Node*)malloc(sizeof(Node));
    if (p == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    p->data = val;
    p->next = top;
    top = p;
    printf("%d pushed onto stack.\n", val);
}

int pop() {
    if (is_empty()) {
        printf("Stack underflow! Cannot pop.\n");
        return -1;  // Or some error code
    }
    Node *temp = top;
    int val = temp->data;
    top = top->next;
    free(temp);
    return val;
}

int peek() {
    if (is_empty()) {
        printf("Stack is empty.\n");
        return -1; // Or some error code
    }
    return top->data;
}

void display() {
    if (is_empty()) {
        printf("Stack is empty.\n");
        return;
    }
    Node *p = top;
    printf("Stack (top to bottom): ");
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    int choice, val;

    do {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                val = pop();
                if (val != -1)
                    printf("Popped value: %d\n", val);
                break;
            case 3:
                val = peek();
                if (val != -1)
                    printf("Top value: %d\n", val);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}


