//Trusting the process and some knowledge.

#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node *next;
};

//Head Pointer
struct Node *head = NULL;

void insertNode(int val){ // I am implementing for adding new Node at the end.
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void display(){
    struct Node *temp = head;
    if(head==NULL)
    printf("List is empty\n");
    else {
        while(temp != NULL){
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }

}

int main(){
    insertNode(10);
    insertNode(30);
    insertNode(50);
    display();


}