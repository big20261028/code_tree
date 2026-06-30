#include <stdio.h>

int main() {
    // Please write your code here.
    char symptom[3];
    int temperature[3];

    int cnt = 0;

    for(int i=0; i <3; i++){
        scanf(" %c %d", &symptom[i], &temperature[i]);
        

        if (symptom[i] == 'Y' && temperature[i] >= 37){
            cnt += 1;
        }
    }

    if (cnt >= 2){
        printf("E");
    }else{
        printf("N");
    }

    

    return 0;
}