//휴먼IT융합학부 로봇융합전공 20191422 정준혁
#define _CRT_NO_SECURE_NO_WARNING
#pragma warning(disable : 4996)
#pragma warning(default:4716)
#include <stdio.h>
int num0, re;
int mult_1()
{
    re = num0 * num0;
}

int main()
{
    printf("입력받은 정수값을 제곱하는 프로그램입니다.\n 정수를 입력해주세요\n>>");
    scanf("%d", &num0);

    mult_1();

    printf("%d의 제곱값은 %d입니다.", num0, re);

}