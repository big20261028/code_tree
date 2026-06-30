#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    int class = 0, hall = 0, bath = 0;
    for(int day = 1; day <= n; day++){
        if(day % 12 == 0){
            bath++;
        }else if (day % 3 == 0){
            hall++;
        }else if (day % 2 == 0){
            class++;
        }
    }
    printf("%d %d %d", class, hall, bath);
    return 0;
}