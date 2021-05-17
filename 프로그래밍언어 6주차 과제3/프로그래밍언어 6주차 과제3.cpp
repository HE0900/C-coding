#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int PW = 1234;

int check() {
	int a;
	static int request = 0;

	request++;

	if (request > 3) {

		printf("로그인 시도 횟수 초과\n");

	}

	printf("비밀번호 : ");
	
	scanf("%d", &a);

	if (a == PW) {

		printf("로그인되었습니다\n");

	}
	return 0;
}




int main() {

	check();
	check();
	check();
	check();

	return 0;

}