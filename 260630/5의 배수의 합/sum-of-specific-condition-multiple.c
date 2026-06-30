#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    if (a < b){
        for (a; a<=b; a++){
            if (a%5 == 0){
                sum += a;
            }
        }
    }else{
        for (b; b<=a; b++){
            if (b%5 == 0){
                sum += b;
            }
        }
    }
    
    printf("%d", sum);
    return 0;
}