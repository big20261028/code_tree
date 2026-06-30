#include <stdio.h>

int main() {
    // Please write your code here.
    int cnt = 0;
    for (int i = 1; i <= 10; i++){
        int val;
        scanf("%d", &val);
        if( val%2 == 1){
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}