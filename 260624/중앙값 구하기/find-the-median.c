#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        if (b > c){
            printf("%d", b);
        }else if(a > c && c > b){
            printf("%d", c);
        }else{
            printf("%d", a);
        }
    }else{
        if (a > c){
            printf("%d", a);
        }else if(b > c && c > a){
            printf("%d", c);
        }else{
            printf("%d", b);
        }
    }
    return 0;
}