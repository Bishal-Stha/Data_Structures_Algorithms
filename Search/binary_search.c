#include<stdio.h>

int binary_search(int arr[], int size, int search){
    int left =0;
    int right = size-1;

    while(left <= right){
        int mid = left + (right - left) /2;

        if(arr[mid]== search){
        return mid;
        }
        else if(arr[mid] > search){
            left = mid+1;
        }
        else {
            right = mid -1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,5,7,11,15,23,27,32};
    int target;
    printf("Enter target: ");
    scanf("%d",&target);
    int result = binary_search(arr,sizeof(arr)/sizeof(arr[0]), target);

    if(result != -1){
        printf("%d is in the %dth index.\n",target,result);
    }
    else {
        printf("%d is not in the list.\n",target);
    }

    return 0;
}