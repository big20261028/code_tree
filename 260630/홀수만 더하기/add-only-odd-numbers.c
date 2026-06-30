#include <stdio.h>

int main() {
    // Please write your code here.
    int n, val;
    scanf(" %d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++){
        scanf(" %d", &val);
        if (val%2 == 1 && val%3 == 0){
            sum += val;
        }
    }
    printf("%d", sum);
    return 0;
}