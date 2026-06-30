#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a , &b);
    int prob = 1;
    for (int i = 1; i <= b; i ++){
        prob *= a;
    }
    printf("%d",prob);
    return 0;
}