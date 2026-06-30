#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b, c;
    scanf("%d %d %d", &a ,&b, &c);
    if (a >= b && c >= b){
        printf("%d", b);
    }else if (b >= a && c >= a){
        printf("%d", a);
    }else{
        printf("%d", c);
    }
    return 0;
}