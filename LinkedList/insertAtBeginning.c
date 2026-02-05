#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtFirst(int value){
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtLast(int value){
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->data = value;
    struct node *temp = head;

    if(temp == NULL)
        head = newNode;

    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

int main(){
    // insertAtFirst(10);
    // insertAtFirst(20);
    insertAtLast(10);
    insertAtLast(20);
    insertAtLast(30);
    insertAtLast(40);
    insertAtLast(50);
    display();
}