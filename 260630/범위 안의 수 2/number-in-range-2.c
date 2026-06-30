#include <stdio.h>

int main() {
    // Please write your code here.
    int val;
    int sum = 0, cnt = 0;
    for (int i = 1; i <= 10; i++){
        scanf(" %d", &val);
        if (val>=0 && val <= 200){
            sum += val;
            cnt ++;
        }
    }
    printf("%d %0.1lf", sum, (double)sum/cnt);
    return 0;
}