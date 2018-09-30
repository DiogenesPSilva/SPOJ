#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int feynmanRecursivo(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return pow(n, 2) + feynmanRecursivo(n - 1);
	}
}

int main(int argc, char *argv[]) {
	int n = 0;

	while (scanf("%d", &n) != 0 && n > 0 && n <= 100) {
		printf("%d \n", feynmanRecursivo(n));
	}
	return 0;
}