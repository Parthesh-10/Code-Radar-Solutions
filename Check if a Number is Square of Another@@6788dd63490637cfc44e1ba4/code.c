// Your code here...
#include <stdio.h>
int main(){
    int n ,m ;
    scanf("%d", &n);
     scanf("%d", &m);

     if(n == m*m || m == n*n){
        printf("Yes");
     }
     else{
        printf("No");
     }
     return 0 ;
}