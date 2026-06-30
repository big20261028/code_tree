#include <stdio.h>

int main() {
    // Please write your code here.
    int mathA, engA, mathB, engB;
    scanf("%d %d %d %d", &mathA, &engA, &mathB, &engB);
    if (mathA > mathB && engA > engB){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}