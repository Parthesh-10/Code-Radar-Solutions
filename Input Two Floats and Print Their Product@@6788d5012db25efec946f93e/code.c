#include <stdio.h>

int main() {
    float a,b,prod;
    printf("Product: ");
    scanf("%f%f", &a,&b);
    prod = a*b;
    printf("%.2f", prod);
    return 0;
    
    }