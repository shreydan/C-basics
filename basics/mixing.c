#include <stdio.h>

void main() {
    int a = 14;
    float b = 4.0;
    float c = a+b;
    float d = a-b;
    float e = a*b;
    float f = a/b;
    //float g = a%b; mod doesnt work on float/double
    int h = a+b;
    int i = a-b;
    int j = a*b;
    int k = a/b;
    //int l = a%b; mod doesnt work on float/double
    //float x = 112.33 % 2.55; mod doesnt work on float/double
    printf("%f %f %f %f \n",c,d,e,f);
    printf("%d %d %d %d \n",h,i,j,k);
    
    //printf("%f",x);
}
