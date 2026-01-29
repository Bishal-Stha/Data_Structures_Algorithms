#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertNode(int val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;

    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteNode() {
    if (head == NULL) {
        printf("LinkedList is empty\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;
    free(temp);
}

void display() {
    struct Node *temp = head;

    if (head == NULL) {
        printf("LinkedList is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insertNode(10);
    insertNode(20);
    insertNode(50);
    deleteNode();
    display();
    return 0;
}
