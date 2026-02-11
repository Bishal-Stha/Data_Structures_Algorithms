/*
Algorithm for selection Sort.
1. Start
2. the loops runs until the second last element.
3. Create a variable called smallest. initially assign it as the first value.
then.
4. if element is smaller than smallest element, set the smaller element as the smallest element.
5. stop. 
*/

/* 
Trial.
 * 1,7,4,3,5
 i=0,j=0. 1 is 
 */
#include<stdio.h>
int *SelectionSort(int arr[], int size){
    int minIndex;
    for(int i=0; i<size-1; i++){
        minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    return arr;
}

int main(){
    int n = 5;
    int arr[] = {1,7,4,3,5};
    int *sortedArr = SelectionSort(arr,n);
    for(int i=0; i<n; i++){
        printf("%d\t",sortedArr[i]);
    }
    return 0;
}
