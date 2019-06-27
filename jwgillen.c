/*
 * Name: John Gillen
 * Assignment: Inclass-1
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	// declare and initialize variables
	int v1 = 10;
	int v2 = 100;

	// first comparison
	if (v1 <= v2) {
		printf("%d <= %d\n", v1, v2);
	} else {
		printf("%d > %d\n", v1, v2);
	}

	// increment v1 
	int i = 0;
	for (i = 0; i < v2; ++i) {
		printf("incremending v1: %d\n", v1);
		v1++;
	}

	// second comparison
	if (v1 >= v2) {
		printf("%d >= %d\n", v1, v2);
	} else {
		printf("%d < %d\n", v1, v2);
	}

	// increment by six
	while (v1 < 200) {
		printf("incrementing v1: %d\n", v1);
		v1 += 6;
	}

	return 0;
}