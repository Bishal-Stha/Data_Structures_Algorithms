#include<stdio.h>

void fibonacci(int n){
    int a=0,b=1,c;

    if(n==1)
    printf("0\t");

    else if(n==2)
    printf("1\t");

    else {
        printf("%d\t%d\t", a, b); 
        for(int i=3; i<=n; i++){
            c = a +b; // c = 1
            printf("%d\t",c);
            a = b; // a = 1
            b = c; // 
        }
    }
}

int main(){
    fibonacci(1);
    return 0;
}