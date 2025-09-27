#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int b;
    int sum = 0 ;
    scanf("%d", &b);
    if (a<1 || a>10000){
        printf("tidak memenuhi");
    }else if (b<1 || b>999){
        printf("tidak memenuhi");
;    }else {
        for(int i = a; i<=b; i++){
            sum = sum + i;
        }
    }
    printf("%d", sum);
}

    