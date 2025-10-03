#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *front = NULL;
Node *rear = NULL;

int is_empty() {
    return front == NULL;
}

void enqueue(int val) {
    Node *p = (Node*)malloc(sizeof(Node));
    if (!p) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    p->data = val;
    p->next = NULL;

    if (rear == NULL) {  // Empty queue
        front = rear = p;
    } else {
        rear->next = p;
        rear = p;
    }
    printf("%d enqueued.\n", val);
}

int dequeue() {
    if (is_empty()) {
        printf("Queue underflow! Cannot dequeue.\n");
        return -1; // or some error code
    }
    Node *temp = front;
    int val = temp->data;
    front = front->next;
    if (front == NULL)  // If queue became empty
        rear = NULL;
    free(temp);
    return val;
}

void display() {
    if (is_empty()) {
        printf("Queue is empty.\n");
        return;
    }
    Node *p = front;
    printf("Queue (front to rear): ");
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    int choice, val;

    do {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                val = dequeue();
                if (val != -1)
                    printf("Dequeued value: %d\n", val);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

