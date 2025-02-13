#include <stdio.h>

int main(){
    int a,b,c,sum;
    printf("Average: ");
    scanf("%d %d %d", &a,&b,&c);
    sum=a+b+c;
    float x ;
    x=(sum/3);
    printf("%.2f", x);
    return 0;
}