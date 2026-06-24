#include <stdio.h>

int main() {
    // Please write your code here.
    int mathA, engA, mathB, engB;

    scanf("%d %d %d %d", &mathA, &engA, &mathB, &engB);

    printf("%d",mathA > mathB && engA > engB);
    
    return 0;
}