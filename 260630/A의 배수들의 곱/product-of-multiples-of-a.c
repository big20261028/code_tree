#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);
    int prob = 1;
    for (int i = 1; i <= b; i ++){
        if (i%a == 0){
            prob *= i;
        }
    }
    printf("%d", prob);
    return 0;
}