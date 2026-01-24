#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("enter size: ");
    scanf("%d",&size);

    int *ptr;
    ptr = (int *)calloc(size, sizeof(int));

    for(int i=0; i<size; i++){
        scanf("%d",&ptr[i]);
    }

    for(int j=0; j<size; j++){
        printf("%d\t",ptr[j]);
    }

    printf("\nNew size: ");
    scanf("%d",&size);

    int *ptr2 = calloc(ptr,size* sizeof(int));
    
    for(int i=0; i<size; i++){
        scanf("%d",&ptr2[i]);
    }

    for(int j=0; j<size; j++){
        printf("%d\t",ptr2[j]);
    }

    free(ptr);
    free(ptr2);
    return 0;
}