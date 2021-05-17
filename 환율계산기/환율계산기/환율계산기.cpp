/*환율계산기 20191422 정준혁*/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    double rate;
    double usd;
    double krw;

    printf("환율을 입력하시오:");
    scanf("%lf", &rate);

    printf("원화 금액을 입력하시오:");
    scanf("%lf", &krw);

    usd = krw / rate;

    printf("원화 %lf원은 %lf달러입니다.\n", krw, usd);

    return 0;
   
}
