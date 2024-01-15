#include<stdio.h>

int main() {
	int num = 10;
	int sum = 0;

	for (int i = 1; i <= num; i++) {
		printf("Num %d \n\n", i);
	}

	//8.1
	for (int i = 1; i <= num; i++) {
		if (i != 5 && i != 7) {
			if (i == 9) break;
			printf("Num %d \n", i);
			
		}
		else {
			continue;
		}
	}

	return 0;
}
	