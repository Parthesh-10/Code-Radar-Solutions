#include <stdio.h>

int main(){
    int a,b;
    scanf("%d,%d", &a,&b);
    int sum = a & b && b & a;
    printf("%d", sum);
    return 0 ;
}