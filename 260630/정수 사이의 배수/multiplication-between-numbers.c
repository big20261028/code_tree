#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0, cnt = 0;
    for (a; a<=b; a++){
        if (a%5==0 || a%7==0){
            sum += a;
            cnt++;
        }
    }
    printf("%d %0.1lf", sum, (double)sum / cnt);
    return 0;
}