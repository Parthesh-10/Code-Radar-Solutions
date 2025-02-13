#include <stdio.h>

int main(){
    char name[20];
    char hobby[40];
    int age;

    printf(" Name: \n Age: \n Hobby: ");
    scanf(" %s %d %s" ,&name,&age,&hobby);
    
    printf("%s", name);
    printf("%d", age);
    printf("%s", hobby);

    return 0;
}