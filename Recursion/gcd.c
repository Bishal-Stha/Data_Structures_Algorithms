#include<stdio.h>
int gcdIter(int p, int q){
    int r;
    if(p < q){
        printf("P must be greater than q.\n");
        return -1;
    }
    while(p%q != 0){// suppose p = 10, q = 8
        r = p%q; // 
        p =q; // p = q means p = 8
        q = r; // q = p%q i.e 8%8 ==0. so, we need a variable to store the remainder value.
    }
    return q;
}

int gcdRecur(int p, int q){
    if(p%q==0)
    return q;
    gcdRecur(q,p%q);
}

int main(){
    printf("GCD of 45 & 25 is %d\n",gcdIter(45,25));
    printf("GCD of 45 & 25 is %d\n",gcdRecur(45,25));
}