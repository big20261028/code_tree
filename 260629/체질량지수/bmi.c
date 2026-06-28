#include <stdio.h>

int main() {
    // Please write your code here.
    int h, w;
    scanf("%d %d", &h, &w);
    double b = (double)(10000 * w) / (h * h);
    printf("%d\n", (int)b);
    if (b >= 25){
        printf("Obesity");
    }
    return 0;
}