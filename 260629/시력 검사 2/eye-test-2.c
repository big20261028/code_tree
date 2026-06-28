#include <stdio.h>

int main() {
    // Please write your code here.
    double eye;
    scanf("%lf",&eye);
    if (eye >= 1.0){
        printf("High");
    }else if(eye >= 0.5){
        printf("Middle");
    }else{
        printf("Low");
    }
    return 0;
}