#include <stdio.h>

int binarysearch(int arr[], int size, int x) {
    /*
    this function works for integer arrays

    arr[] = the array to search the value in
    size = the size of the array
    x = value to search
    */

   int first = 0;
   int last = size - 1;
   int mid;

   while(first <= last) {
       mid = (first+last)/2;

       if (x < arr[mid]) {
           last = mid - 1;
       }
       else if (x > arr[mid]) {
           first = mid + 1;
       }
       else {
           return mid;
       }
   }

   return -1;

}