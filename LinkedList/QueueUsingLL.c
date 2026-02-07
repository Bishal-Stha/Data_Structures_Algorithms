#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void enqueue(int value){
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    struct node *temp = head;

    if(temp == NULL){
        head = newNode;
        printf("%d enqueued in Queue.\n",value);
    }

    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        printf("%d enqueued in Queue.\n",value);
    }
}

int dequeue(){
    if(head == NULL){
        printf("Queue is empty.\n");
        return -1;
    }
    else{
        struct node *temp = head;
        int del = temp->data;
        head = head->next;
        free(temp);
        printf("%d dequeued from Queue.\n", del);
        return del;
    }
}

void display(){
    struct node *temp = head;
    printf("Displaying: \n");
    while(temp != NULL){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");  
}

int main(){
    enqueue(10);
    enqueue(30);
    enqueue(50);
    display();
    printf("Dequeued element: %d",dequeue());
    return 0;
}