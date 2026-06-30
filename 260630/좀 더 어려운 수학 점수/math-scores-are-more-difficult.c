#include <stdio.h>

int main() {
    // Please write your code here.
    int mathA, engA, mathB, engB;
    scanf("%d %d %d %d", &mathA, &engA, &mathB, &engB);

    if (mathA > mathB){
        printf("A");
    }else if (mathA < mathB){
        printf("B");
    }else{
        if (engA > engB){
            printf("A");
        }else{
            printf("B");
        }
    }

    return 0;
}