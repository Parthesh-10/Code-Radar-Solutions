#include <stdio.h>

int main(){
    char name[20];
    char hobby[40];
    int age;

    // printf(" Name: \n Age: \n Hobby: ");
    scanf(" %s %d %s" ,&name,&age,&hobby);
    
    printf(" Name:%s\n", name);
    printf("Age:%d\n", age);
    printf("Hobby:%s\n", hobby);

    return 0;
}