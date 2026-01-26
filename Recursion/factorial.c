#include <stdio.h>
int factRecur(int n)
{
    // So cool. I am writing so modular code that, i saved my 5-7 lines of code.
    return (n == 0 || n == 1) ? 1 : n * factRecur(n - 1);
    /*
    if(n==0){
    return 1;
    }
    else {
    return n*factIter(n-1);
}
    */
}

int factIter(int n){
    int fact =1;
    if(n==0 || n==1)
    return 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    printf("%d\n", factRecur(5));
    printf("%d\n", factIter(5));
}