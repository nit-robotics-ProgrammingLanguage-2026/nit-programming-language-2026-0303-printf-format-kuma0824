#include <stdio.h>

int main() {
    /* 課題0303: カッコの中を埋めて、入力されたdoubleのデータを，小数点以下15桁まで表示するプログラムを書け． */
    double x;
    scanf("%lf", &x);
    printf("%.15f", x); 
    return 0;
}
