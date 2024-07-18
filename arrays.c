#include <stdio.h>

#define MAX_IDS 32

int main() {
	int ids[MAX_IDS] = {0, 1, 2};

	ids[3] = 0x41;

	for(int i = 0; i < MAX_IDS; i++) {
		printf("%d\n", ids[i]);
	}
}