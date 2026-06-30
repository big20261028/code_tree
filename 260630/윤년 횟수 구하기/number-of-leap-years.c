#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);
    int cnt = 0;

    for (int y = 4; y <= N; y += 4){
        if (y % 100 == 0 && y % 400 != 0){
            continue;
        }
        cnt++;
    }

    printf("%d", cnt);
    return 0;
}