#include <stdio.h>

int main(){
    float a,b,c,sum;
    printf("Average: ");
    scanf("%f %f %f", &a,&b,&c);
    sum=a+b+c;
    float x ;
    x=(sum/3);
    printf("%.2f", x);
    return 0;
}