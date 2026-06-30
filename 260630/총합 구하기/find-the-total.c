#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    for (a; a<= b; a++){
        // printf("루프테스트\n");
        if ( a%6 == 0 && a%8 != 0 ){
            // printf("조건문 달성");
            sum += a;
        }
    }
    printf("%d", sum);
    return 0;
}