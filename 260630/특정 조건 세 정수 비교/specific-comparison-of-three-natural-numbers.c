#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min_val;
    if (a >= b && c >= b){
        min_val = b;
    }else if (b >= a && c >= a){
        min_val = a;
    }else{
        min_val = c;
    }

    if (a == min_val){
        printf("1 ");
    }else{
        printf("0 ");
    }

    if (a==b && b == c){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}