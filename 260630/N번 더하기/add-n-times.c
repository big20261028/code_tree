#include <stdio.h>

int main() {
    // Please write your code here.
    int a, n;
    scanf("%d %d", &a, &n);
    int i = 1;
    while(i <= n){
        printf("%d\n", a + (n * i++));
    }
    return 0;
}