#include <stdio.h>

int main(){
    float r,pie = 3.14;
    printf("Area: ");
    scanf("%f", &r);
    float area = pie*(r*r);
    printf("%.2f", area);
    return 0 ;

}