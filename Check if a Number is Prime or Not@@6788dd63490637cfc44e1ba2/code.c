// Your code here...
#include <stdio.h>
int main(){
    int n,i = 0;
    scanf("%d", &n);
    for(int a = 2;a <=n-1;a++){
        if(n%i == 0){
            i = 1;
            break;
        }
    }
    if(i == 0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0 ;
}