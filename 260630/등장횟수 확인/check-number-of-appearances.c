#include <stdio.h>

int main() {
    // Please write your code here.
    int cnt = 0;
    for (int i = 1; i <= 5; i++){
        int val;
        scanf("%d", &val);
        if(val%2 == 0){
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}