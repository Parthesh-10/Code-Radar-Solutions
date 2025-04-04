// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    if(n<=1){
        printf("Not Prime");
    }
    else{
        for(int i = 2;i*i<=n;i++){
            if(n/2%i==0){
                printf("Prime");
            }
            break;
        }
        
    }
    return 0 ;
}