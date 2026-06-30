#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    // printf("%d %d\n", n, sum);

    printf("%c", sum == n ? 'P' : 'N');
    return 0;
}