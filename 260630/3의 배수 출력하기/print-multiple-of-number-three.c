#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    int i = 3;
    while(i <= n){
        printf("%d ", i);
        i += 3;
    }
    return 0;
}