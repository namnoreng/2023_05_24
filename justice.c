#include <stdio.h>

void multiple(int num) {
	for (int i = 1;i < 101;i++) {
		if (i % num == 0) {
			printf("%4d", i);
		}
	}
}

int abs(int x){
	return (x > 0) ? x : -x;
}

void lotto () {
	int i, num, result[6] = { 0 }, flag[45] = { 0 };
	srand(time(NULL));
	for (i = 0;i < 6;i++) {
		num = rand() % 45;
		if (flag[num] == 1) {
			i--;
		}
		else {
			result[i] = num;
			flag[num] = 1;
		}
	}
	for (i = 0;i < 6;i++) {
		printf("%5d", result[i] + 1);
	}
}
