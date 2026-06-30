#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    int date[12] = {31, 28, 31, 30,31,30,31,31,30,31,30,31};
    printf("%d", date[n-1]);
    return 0;
}