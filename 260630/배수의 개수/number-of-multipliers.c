#include <stdio.h>

int main() {
    // Please write your code here.
    int cnt1 = 0, cnt2 = 0;
    
    for (int i = 1; i <= 10; i++){
        int val;
        scanf(" %d", &val);
        if (val % 3 == 0){
            cnt1++;
        }
        if (val % 5 == 0){
            cnt2++;
        }
    }
    printf("%d %d", cnt1, cnt2);
    return 0;
}