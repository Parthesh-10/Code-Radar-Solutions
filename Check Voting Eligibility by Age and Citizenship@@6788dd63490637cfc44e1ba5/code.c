// Your code here...
#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x,&y);
    if(x<18 && y == 0){
        printf("Not Eligible");
    }
    else if(x<18 && y == 1){
        printf("Not Eligible");
    }
     else if (x>=18 && y == 0){
        printf("Not Eligible");
    }
    else{
        printf("Eligible");
    }
    return 0 ;

}