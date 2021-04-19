//Programming part Q 10

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float star(int a) {
	
	if (a == 0) {
		return 0;
	}

	else {

		return (1.0 / a + star(a - 1));

	}



}

int main() {
	int a;

	printf("반복 횟수 : ");

	scanf("%d", &a);

	printf("%f", star(a));

} 
