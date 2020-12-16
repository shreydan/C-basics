#include <stdio.h>
void main() {
    int option;
    printf("enter\n1. int\n2.char\n>>> ");
    scanf("%d",&option);
    printf("option = %d\n",option);
    
    
    if (option == 2) {
        char character;
        printf("enter character: ");
        scanf(" %c",&character);
        int ascii_val = character;
        printf("ascii value: %d \n",ascii_val);
    }
}
