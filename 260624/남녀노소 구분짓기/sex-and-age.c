#include <stdio.h>

int main() {
    // Please write your code here.
    int gender, age;
    scanf("%d %d", &gender, &age);

    if (age >= 19){
        if (gender){
            printf("WOMAN");
        }else{
            printf("MAN");
        }   
    }else{
        if (gender){
            printf("GIRL");
        }else{
            printf("BOY");
        }   
    }

    return 0;
}