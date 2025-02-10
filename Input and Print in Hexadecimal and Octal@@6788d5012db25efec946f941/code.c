#include <stdio.h>

int main() {
    int a;

    printf("enter a number: ");
    scanf("%d", &a);

    printf("Hexadecimal: %X\n" a);
    printf("octal: %o\n" a);

    return 0;

}