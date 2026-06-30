#include <stdio.h>

int main() {
    // Please write your code here.
    int b, a;
    scanf("%d %d", &b, &a);
    for (b; b>=a; b-=2){
        printf("%d ", b);
    }
    return 0;
}