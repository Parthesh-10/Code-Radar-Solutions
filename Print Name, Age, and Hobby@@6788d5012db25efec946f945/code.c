#include <stdio.h>

int main(){
    int age;
    char name,hobby;
    printf(" Name: \n Age: \n  \n Hobby: \n");
    scanf("%d %s %s", &age,&name,&hobby);
    printf("%d %s %s", age,name,hobby);
    return 0;
}