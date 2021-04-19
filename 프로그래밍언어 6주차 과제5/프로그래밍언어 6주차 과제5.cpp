//Programming part @ 05
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum();

int sum(int num) {
	

	if (num != 0) {

		return num + sum(num - 1);
	}

	else {

		return num;
	}

}

int main() {

	int num, res;

	printf("정수를 입력하세요\n");
	scanf("%d", &num);

		res = sum(num);

		printf("1부터 %d까지의 합 = %d\n", num, res);


}