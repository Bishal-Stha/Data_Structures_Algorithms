#include <stdio.h>

int *InsertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return arr;
}

int main() {
    int size = 5;
    int arr[] = {1, 7, 4, 3, 5};

    int *sortedArr = InsertionSort(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d\t", sortedArr[i]);
    }

    return 0;
}
