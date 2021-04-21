// 로봇프로그래밍언어 12주자 과제3 원의 면적을 구하는 프로그램을 사용자 정의함수를 사용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float rad;
float area;
void formula_1()
{
    area = 3.14 * rad * rad;
}

int main(void)
{
    

    printf("반지름을 입력하시오:");
    scanf("%f", &rad);

    formula_1();

    printf("원의 면적:%f\n", area);

    return 0;
}
