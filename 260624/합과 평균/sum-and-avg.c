#include <stdio.h>

int main() {
    // Please write your code here.
    int A;
    int B;

    scanf("%d %d", &A, &B);

    int sum = A + B;
    double avg = (double)sum / 2;

    printf("%d %0.1lf", sum, avg);

    return 0;
}