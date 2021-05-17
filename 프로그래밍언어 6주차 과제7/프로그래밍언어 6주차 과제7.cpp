//Programming part Q 07

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int show_digit(int x);

void main() {
    int x;

    printf("정수를 입력하세요 : ");

    scanf("%d", &x);

    show_digit(x);
}

int show_digit(int x) {

    if (x == 0)

        return 0;

    show_digit(x / 10);

    printf("%d ", x % 10);
}