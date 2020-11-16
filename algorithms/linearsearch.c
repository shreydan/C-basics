#include <stdio.h>

int linearSearch(int arr[], int size, int x) {
    /*
    this function works for integer arrays

    arr[] = the array to search the value in
    size = the size of the array
    x = value to search
    */
    for(int i=0; i<size; i++) {
        if(arr[i] == x):
            return i;
    }
    return -1;
}