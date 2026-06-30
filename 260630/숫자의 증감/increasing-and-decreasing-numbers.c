#include <stdio.h>

int main() {
    // Please write your code here.
    char c;
    int n;
    scanf(" %c %d", &c, &n);
    if (c == 'A'){
        for(int i = 1; i <= n; i++){
            printf("%d ", i);
        }
    }else if (c == 'D'){
        for(n; n >= 1; n--){
            printf("%d ", n);
        }
    }
    return 0;
}