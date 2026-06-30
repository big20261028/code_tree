#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);
    if (N>=3 && N<=5){
        printf("Spring");
    }else if(N>=6 && N<=8){
        printf("Summer");
    }else if(N>=9 && N<=11){
        printf("Fall");
    }else if(N>=1 && N<=2 || N==12){
        printf("Winter");
    }
    return 0;
}