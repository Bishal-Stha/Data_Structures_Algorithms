#include<stdio.h>
#include<stdlib.h>

int main(){

    // int x = 10;
    // int *ptr;
    // ptr = &x;
    // printf("%d\n",ptr);
    // printf("%d\n",*ptr);

    int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int *ptr = malloc(size * sizeof(int));
    for(int i=0; i<size; i++){
        scanf("%d",&ptr[i]);
    }

    for(int j=0; j<size; j++){
        printf("%d\t",ptr[j]);
    }

    free(ptr);
    
    return 0;
}