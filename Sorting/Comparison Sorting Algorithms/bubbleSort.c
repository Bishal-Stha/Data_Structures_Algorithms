#include<stdio.h>
/*
1,7,4,3,5 (n=5)
i=0,j=0. 1 is compared with 7. No swap.
1,7,4,3,5
i=0,j=1. 7 is compared with 4. Swap
1,4,7,3,5
i=0,j=2. 7 is compared with 3. Swap
1,4,3,7,5
i=0,j=3. 7 is compared with 5. Swap
1,4,3,5,7

i=1, j=0. 1 is compared with 4. No swap
1,4,3,5,7
i=1,j=1. 4 is compared with 3. Swap
1,3,4,5,7

*/
int *BubbleSort(int arr[], int size){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int main(){
    int size =5;
    int arr[] = {1,7,4,3,5};
    int *sortedArray = BubbleSort(arr, size);
    for(int i=0; i<size; i++){
        printf("%d\t",sortedArray[i]);
    }
    return 0;
}