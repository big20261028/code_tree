#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);
    printf("%d\n", N * N);
    if (N < 5){
        printf("tiny");
    }
    return 0;
}