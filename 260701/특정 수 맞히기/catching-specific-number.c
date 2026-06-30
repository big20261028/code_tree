#include <stdio.h>

int main() {
    // Please write your code here.
    int val;
    while(1){
        scanf("%d", &val);
        if (val > 25){
            printf("Lower\n");
        }else if (val < 25){
            printf("Higher\n");
        }else{
            printf("Good\n");
            break;
        }
    }
    return 0;
}