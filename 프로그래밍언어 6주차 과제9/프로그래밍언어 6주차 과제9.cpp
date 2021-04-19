//Programming part Q 09

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_digit_sum(int num);

int main(){

	int a, b;

	printf("정수를 입력하시오: ");

	scanf("%d", &a);

	b = get_digit_sum(a);

	printf("자리수의 합: %d\n", b);

	return 0;
}

int get_digit_sum(int a){

	if (a == 0)

		return 0;

	return ((a % 10) + get_digit_sum(a / 10));
}
