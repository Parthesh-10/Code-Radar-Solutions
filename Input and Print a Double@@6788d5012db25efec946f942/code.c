#include <stdio.h>

int main(){
    double x;
    printf("You entered: ");
    scanf("%lf", &x);
    printf("%.10lf", x);
    return 0 ;
}