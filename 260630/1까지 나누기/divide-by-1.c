#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    int i = 1;
    while (1){
        n /= i;
        if (n <= 1) break;
        i++;
    }
    printf("%d", i);
    return 0;
}