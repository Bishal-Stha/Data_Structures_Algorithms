#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtKth(int pos, int value){
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    struct node *temp = head;
    if(head == NULL){
        head = newNode;
        printf("%d is inserted at 0 position.\n",value);
    }
    else {
        for(int i=1; i< pos; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        printf("%d is inserted at %d position.\n",value,pos);
    }
}

int deleteAtFirst(){
    if (head == NULL){
    printf("Linkedlist is empty");
    return -1;
    }
    else {
        struct node *del = head;
        head = head->next;
        int info = del->data;
        free(del);
        return info;

    }
}

int deleteAtLast(){
    struct node *temp = head;
    struct node *prev = NULL;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    // Case 2: Only one node
    if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Last node deleted\n");
        return;
    }

    while ((temp->next)->next != NULL) {
        temp = temp->next;
    }

    temp->next = NULL;
    free(temp);
}


void display(){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

int main(){
    insertAtKth(0,10);
    insertAtKth(1,11);
    insertAtKth(2,12);
    deleteAtFirst();
    display();
}