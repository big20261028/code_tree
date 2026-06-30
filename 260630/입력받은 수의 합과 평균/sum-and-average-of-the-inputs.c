#include <stdio.h>

int main() {
    // Please write your code here.
    int n, val;
    scanf(" %d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++){
        scanf(" %d", &val);
        sum += val;
    }
    printf("%d %0.1lf", sum, (double)sum / n);
    return 0;
}