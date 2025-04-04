// Your code here...
#include <stdio.h>

int main(){
    int x,y;
    char op;
    scanf("%d %d %c", &x,&y,&op);
    

    if(op == '+'){
        int sum = x+y;
        printf("%d", sum);
    }
    else if(op == '-'){
        int sub = x-y;
        printf("%d", sub);
    }
    else if(op == '*'){
        int mul = x*y;
        printf("%d", mul);
    }
    else if(op == '/'){
        int div = x/y;
        printf("%d", div);
    }
    else{
        printf("error");
    }
}