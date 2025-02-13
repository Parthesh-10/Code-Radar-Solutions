#include <stdio.h>

int main(){
    int age ;
    char name[20], hobby[30];

    printf("Name: \n Age: \n Hobby: ");
    scanf("%d %c %c", &age,&name,&hobby);
    printf("%d %c %c ", age,name,hobby);
    return 0;
}