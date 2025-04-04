// Your code here...
#include <stdio.h>

int main(){
    int x,y;
    char op;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%c", &op);

    if(op == '+'){
        sum = x+y;
        printf("%d", sum);
    }
    else if(op == '-'){
        sub = x-y;
        printf("%d", sub);
    }
    else if(op == '*'){
        mul = x-y;
        printf("%d", mul);
    }
    else if(op == '/'){
        div = x-y;
        printf("%d", div);
    }
    else{
        printf("error");
    }
}