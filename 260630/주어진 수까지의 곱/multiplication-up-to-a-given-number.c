#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a , &b);
    int prob = 1;

    for (a; a<=b; a++){
        prob *= a;
    }
    printf("%d", prob);

    return 0;
}