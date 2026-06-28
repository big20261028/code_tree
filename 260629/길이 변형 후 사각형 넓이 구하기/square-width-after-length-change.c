#include <stdio.h>

int main() {
    // Please write your code here.
    int h, v;
    scanf("%d %d", &h, &v);
    h += 8;
    v *= 3;
    printf("%d\n%d\n%d", h, v, h*v);
    return 0;
}