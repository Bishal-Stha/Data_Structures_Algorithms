#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};
struct node *head = NULL;

void InsertAtLast(int data){
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (head == NULL){
        head = newNode;
        printf("%d is added.\n",data);
    }
    else {
        struct node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        printf("%d is added.\n",data);
    }
}

int DeleteAtLast(){
    if(head == NULL){
        printf("No node to delete.\n");
        return -1;
    }
    else{
        struct node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        int del = temp->data;
        temp->next = NULL;
        free(temp);
        return del;
    }
}

void Display(){
    struct node *temp = head;
    while(temp->next != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    InsertAtLast(10);
    InsertAtLast(20);
    InsertAtLast(30);
    DeleteAtLast();
    Display();
    return 0;
}