//Programming part Q 08

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

int get_Digit(int x)
{
    int c = 1;
    int a = 1;
    int r;

    while (1)
    {
        r = x / c;
        if (r < 10)
            break;
        c = c * 10;
        a++;
    }

    return a;
}

int main()
{
    int num;
    int a;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    a = get_Digit(num);
    printf("자리수의 개수 : %d\n", a);

    return 0;
}