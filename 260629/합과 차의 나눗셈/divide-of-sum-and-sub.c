#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%0.2lf", (double)(a+b)/(a-b));
    return 0;
}