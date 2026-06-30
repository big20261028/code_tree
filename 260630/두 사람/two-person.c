#include <stdio.h>

int main() {
    // Please write your code here.
    int ageA, ageB;
    char genA, genB;

    scanf("%d %c %d %c", &ageA, &genA, &ageB, &genB);

    // printf("%d %c %d %c", ageA, genA, ageB, genB);

    if (ageA >= 19 && genA == 'M' || ageB >= 19 && genB == 'M'){
        printf("1");
    }else{
        printf("0");
    }


    return 0;
}