// I need to implement 3 functionalities to get Hashmaps.
/**
 * 1. Insert()
 * 2. Delete()
 * 3. Search(key)
 */

#include<stdio.h>
#define SIZE 10
#define NUM 10
int hashTable[SIZE] = {0};

int hashFunction(int k){
    return k % 10;
}

void insert(int key){
    int idx = hashFunction(key);
    if(hashTable[idx] == 0){
        hashTable[idx] = key;
        printf("%d is added to the hashmap.\n",key);
    }
    else{
        printf("%d couldn't be added to the hashmap.\n",key);
    }
}

void delete(int key){
    int idx = hashFunction(key);
    if(key == hashTable[idx]){
        hashTable[idx] = 0;
        printf("%d is deleted from hashmap.\n",key);
    }
    else{
        printf("%d is not in the hashtable.\n",key);
    }
}

void search(int key){
    int idx = hashFunction(key);
    if(key == hashTable[idx])
    {
        // return key;
        printf("Key is in %d index of hashtable.\n",idx);
    }
    else
    printf("Key not inside hashtable.\n");
}

void displayHashTable(){
    for(int i=0; i<SIZE; i++){
        printf("%d\t",hashTable[i]);
    }
    printf("\n");
}

int main(){
    int arr[SIZE] = {10,7,4,6,8,11,23,15,2,19};
    insert(arr[0]);
    insert(arr[1]);
    search(7);
    displayHashTable();


    return 0;
}