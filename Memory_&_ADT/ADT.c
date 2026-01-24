/*
ADT: Abstract Data Type is a data type that works on certain principle and applies that functionality.
For eg. If an Array is specifically treated in such a way that the element entered at first is removed at last or (LIFO), you get stack.
*/

#include<stdio.h>
#define SIZE 5

int top = -1;
int Stack[SIZE];

void Push(int data){
    if(top == SIZE-1)
    printf("Stack is full. Nothing to push.\n");
    Stack[++top] = data;
}

int Pop(){
    if(top==-1){
    printf("Stack is empty.\n");
    return -1; 
}
    return Stack[top--];
}

void display(){
    printf("Displaying Stack elements: ");
    for(int i = top; i >= 0; i--){
        printf("%d\t",Stack[i]);
    }
}

int main(){
    Push(10);
    Push(20);
    Push(40);
    Push(47);
    Pop();
    display();
}