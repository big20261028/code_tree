#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);
    if (N >= 80){
        printf("pass\n");
    }else{
        printf("%d more score", 80-N);
    }
    return 0;
}