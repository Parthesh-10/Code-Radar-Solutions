#include <stdio.h>

int main(){
    char name[20];
    char hobby[40];
    int age;

    printf(" Name:  Age:  Hobby: ");
    scanf("%d %s %s", &age,&name,&hobby);
    printf("%d\n%s\n %s", age,name,hobby);

    return 0;
}