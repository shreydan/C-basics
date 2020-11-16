#include <stdio.h>

float adder(float a, float b) {
    return a+b;
}

float subtractor(float a, float b) {
    return a-b;
}

float multiplier(float a, float b) {
    return a*b;
}

float divider(float a, float b) {
    return a/b;
}

float exponent(float a, float b) {
    float val = 1 ;
    for(int i=1; i<=b; i++) {
        val *= a;
    }
    return val;
}

void main() {
    printf("%f\n",adder(2,2));
    printf("%f\n",subtractor(2,2));
    printf("%f\n",multiplier(2,2));
    printf("%f\n",divider(2,2));
    printf("%f\n",exponent(2,2));
}