#include<stdio.h>
void TOH(int disks, char Source, char Auxilliary, char Destination){
    if(disks>0){
    TOH(disks-1,Source, Destination, Auxilliary);
    printf("disk %d is moved from %c to %c\n",disks, Source, Destination);
    TOH(disks-1,Auxilliary,Source,Destination);
    }
}

int main(){
    int n;
    printf("enter no of disks: ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}