#include <stdio.h>

int main() {
    // Please write your code here.
    int A, N;
    scanf("%d %d", &A, &N);

    for(int i=0; i<N; i++){
        A += N;
        printf("%d\n", A);
    }
    return 0;
}