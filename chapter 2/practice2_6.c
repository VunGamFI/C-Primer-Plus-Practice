#include<stdio.h>
int main(void){
    int toes = 10;
    int squared;

    squared = toes * toes;

    printf("数值为%d。\n", toes);
    printf("该值的2倍为%d。\n", toes * 2);
    printf("该值的平方为%d。", squared);

    return 0;
}