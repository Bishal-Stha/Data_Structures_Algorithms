#include<stdio.h>
int linearSearch(int *arr, int size, int search){
    int search_status = 0;
    int idx;
    for(int i=0; i<size; i++){
        if(arr[i] == search){
            search_status++;
            idx = i;
            break;
        }
    }
    return search_status == 1 ? idx : -1;
}

int main(){
    int arr[] = {1,5,7,11,15,23,27,32};
    int target;
    printf("Enter target: ");
    scanf("%d",&target);
    int result = linearSearch(arr,sizeof(arr)/sizeof(arr[0]), target);

    if(result== -1)
    printf("%d is not in the list.",target);
    else
    printf("%d is in %d th index.\n",target,result);

    return 0;
}