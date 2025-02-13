#include <stdio.h>

int main(){
    int a,b,c;
    printf("Average: ");
    scanf("%d %d %d", &a,&b,&c);
    float x ;
    x=((a+b+c)/3);
    printf("%.2f", x);
    
    return 0;
}