// Your code here...
#include <stdio.h>

int main(){
    int n,count=0;
    scanf("%d", &n);
    if(n<=1){
        count = 1;
    }
    for(int i = 2;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
        else{
            count == 2;
        }
        
    }
    if(count >=2){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0 ;
}