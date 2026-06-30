#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int val;
        scanf(" %d", &val);
        if (val%2==1 && val%3==0){
            printf("%d\n", val);
        }
    }
    return 0;
}