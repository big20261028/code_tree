#include <stdio.h>

int main() {
    // Please write your code here.
    int n, i;
    scanf("%d", &n);
    int sum = 0;
    for (i = 0; i <= 100; i++){
        sum += i;
        if (sum >= n) break;
    }
    printf("%d", i);
    return 0;
}