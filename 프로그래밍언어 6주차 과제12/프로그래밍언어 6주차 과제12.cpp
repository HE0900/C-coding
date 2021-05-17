//Programming part Q 12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n) {
    if (n == 1) {

        return 1;

    }
    else if (n == 0) {

        return 0;

    }
	else {

		return (fib(n - 2) + fib(n - 1));

	}

}

int main() {

    int i;
    int a = 0;
   
    for (i = 0; i <= 20; i++)
       
    printf("fib(%d) = %d\n",i, fib(i));

    return 0;
}