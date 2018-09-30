#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int feynman(int n) {
	int i, result = 0;
	for (i = n; i > 0; i--) {
		result += n * n;
		n = n - 1;
	}
	return result;
}

int main(int argc, char *argv[]) {
	int n = 0;

	while (scanf("%d", &n) != 0 && n > 0 && n <= 100) {
		printf("%d \n", feynman(n));
	}
	return 0;
}