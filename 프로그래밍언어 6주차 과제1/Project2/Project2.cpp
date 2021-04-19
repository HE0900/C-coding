//Programming part Q 01
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int plus(int, int);
int mine(int, int);
int mul(int, int);
int div(int, int);

int main() {

	char a; //연산자
	int x, y;
	int b; // 반복문

	for (b = 0; b < 5; b++) {

		printf("연산을 입력하세요\n");
		scanf("%d %c %d", &x, &a, &y);

		if (a == '+')
			printf("연산 결과 : %d\n", plus(x, y));

		else if (a == '-')
			printf("연산 결과 : %d\n", mine(x, y));

		else if (a == '*')
			printf("연산 결과 : %d\n", mul(x, y));

		else if (a == '/')
			printf("연산 결과 : % d\n", div(x, y));

		else
			printf("ERROR) 올바른 연산자를 입력하세요.");

	}

	return 0;
}

int plus(int x, int y){

	static int count;

	count++;

	printf("덧셈은 총 %d번 실행되었습니다.\n",count);

	return (x + y);

}

int mine(int x, int y) {

	static int count;

	count++;

	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);

	return (x - y);

}

int mul(int x, int y) {

	static int count;

	count++;

	printf("곱셈은 총 %d번 실행되었습니다.\n", count);

	return (x * y);

}

int div(int x, int y) {

	static int count;

	count++;

	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);

	return (x / y);

}