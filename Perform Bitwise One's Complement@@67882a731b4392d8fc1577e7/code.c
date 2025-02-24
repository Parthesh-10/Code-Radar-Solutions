#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int b;
    scanf("%d ",&b);
    int sum = ~b;
    printf("%d", sum);
    return 0;
}