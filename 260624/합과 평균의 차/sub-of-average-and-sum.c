#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n%d\n%d\n", a+b+c, (a+b+c)/3, (a+b+c)-((a+b+c)/3));

    return 0;
}