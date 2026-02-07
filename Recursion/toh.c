
#include<stdio.h>
static int num = 0;
void toh(int n, char src, char tar, char aux){
    // if(n==1)
    // printf("Moved Disk %d from %c to %c\n",n,src,tar);
    // else {
    //     toh(n-1,src,aux,tar);
    //     printf("Moved Disk %d from %c to %c\n",n,src,tar);
    //     toh(n-1,aux,tar,src);
    // }

    if (n>0){
        toh(n-1,src,aux,tar);
        printf("Moved Disk %d from %c to %c\n",n,src,tar);
        toh(n-1,aux,tar,src);
    }
    
}

int main(){
    int n;
    char src='A', tar='C', aux='B';
    printf("Enter no. of disks: ");
    scanf("%d",&n);
    toh(n,src,tar,aux);
}