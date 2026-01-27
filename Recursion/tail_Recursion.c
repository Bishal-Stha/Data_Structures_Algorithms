#include<stdio.h>
int fact(int n, int f){
    return (n==0) ? f : fact(n-1,n*f);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("factorial of %d is %d\n",n,fact(n,1));
    return 0;
}