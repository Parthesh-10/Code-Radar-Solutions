#include <stdio.h>
int main(){
    int x;
    printf("");
    scanf("%d", &x);

    if(x%5==0 && x%11==0){
        printf("Divisible");
    }
    else{"Not Divisible"};
    return 0 ;

}