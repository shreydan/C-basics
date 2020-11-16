#include <stdio.h>

#define PI 3.14;
int age = 19; /*this is essentially a global variable!*/
int main() {
    int a = 35;
    float b = 22.5777;
    int c = a * b;
    const float e = 2.7; /*const value can't be changed*/
    const float pi = PI; /*const value but it has been defined using the define preprocessor*/
    
    
    printf("simple multiplication: %d x %f = %d \n", a, b, c);
    printf("Pi %f is a constant and so is e %f \n", pi, e);
    printf("I am %d years old \n", age);

    printf("lets print the table of 5 with a for loop >>>\n");

    for(int i=1;i<=10;i++) {
        printf("5 X %d = %d \n",i,(5*i));
    }

    return 0;
}