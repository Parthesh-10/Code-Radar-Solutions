#include <stdio.h>

int main(){
    int age;
    char name[20],hobby[30];

    printf(" Name: \n Age: \n  Hobby: \n");
    scanf("%d %s %s", &age,&name,&hobby);
    printf("%d\n%s\n %s", age,name,hobby);
    return 0;
}