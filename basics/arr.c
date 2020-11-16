/*arrays*/

#include <stdio.h>
#include <stdbool.h>

void oddeven(int arr[], int size) {
    for(int i=0;i<size;i++) {
        if(arr[i] % 2 == 0) {
            printf("%d is even\n",arr[i]);
        }
        else {
            printf("%d is odd\n",arr[i]);
        }
    }
}

int linsrch(int arr[], int size, int x) {
    
    printf("%d\n",x);
    printf("the size of the array is %d\n",size);
    for(int i=0;i<size;i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;

}

void main() {
    int arr[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int arrSize = sizeof arr / sizeof arr[0];
    
    
    oddeven(arr,arrSize);
    
    int x = 5;
    int flag = linsrch(arr,arrSize,x);
    printf("%d \n",flag);
}