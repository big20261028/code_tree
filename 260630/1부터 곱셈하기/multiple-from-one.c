#include <stdio.h>

int main() {
    // Please write your code here.
    int n, i;
    scanf("%d", &n);
    int prob = 1;
    for (i = 1; i <= 10; i++){
        prob *= i;
        if (prob >= n) break;
    }
    printf("%d", i);
    return 0;
}