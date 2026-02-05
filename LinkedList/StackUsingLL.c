#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int data){
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    //insert at first position.
    if(head == NULL){
        head = newNode;
        printf("%d is pushed.\n",data);
    }
    else{
        newNode->next = head;
        newNode->data = data;
        head = newNode;
        printf("%d is pushed.\n",data);
    }
}

int pop(){
    //delete at first.
    if(head == NULL){
        printf("Stack is empty.\n");
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

int main(){
    push(10);
    push(30);
    push(50);
    printf("Popped element: %d",pop());
    return 0;
}