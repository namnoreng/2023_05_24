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
