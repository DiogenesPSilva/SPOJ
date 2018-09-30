#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int participants = 0, winner = 0, count = 1, i;
	int* tickets;

	while (scanf("%d", &participants) != 0 && participants > 0 && participants <= 10000) {
		tickets = (int *)malloc(participants * sizeof(int));

		for (i = 0; i < participants; i++) {
			scanf("%d", &tickets[i]);
		}
		for (i = 0; i < participants; i++) {
			if (tickets[i] == (i + 1)) {
				winner = tickets[i];
			}
		}
		printf("Teste %d \n", count);
		printf("%d \n", winner);
		count++;
		free(tickets);
	}
	return 0;
}