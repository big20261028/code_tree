#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b){
        for (a; a >= b; a--){
            printf("%d ", a);
        }
    }else{
        for (b; b >= a; b--){
            printf("%d ", b);
        }
    }
    return 0;
}