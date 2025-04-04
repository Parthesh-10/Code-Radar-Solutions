// Your code here...
#include <stdio.h>

int main(){
    int n,count=0;
    scanf("%d", &n);
    if(n<=1){
        count = 1;
    }
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            count = 1;
        }
        else{
            count = 2;
        }
        
    }
    if(count < 2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0 ;
}