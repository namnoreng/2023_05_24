#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#define PI 3.141592

//void main() {
//	int i, num;
//	srand(time(NULL));
//	while (1) {
//		for (i = 1;i < 7;i++) {
//			num = rand() % 45 + 1;
//			printf("%5d", num);
//		}
//		printf("\n");
//		Sleep(1000);
//	}
//}

void main() {
	lotto();
}

//void main() {
//	printf("%.1f %.1f %.1f \n",pow(2,2),pow(2,3),pow(2,4));
//	printf("abs(-10) = %d \n",abs(-10));
//	printf("sqrt(81) = %.1f \n",sqrt(81.0));
//	printf("log(e) = %.1f \n",log(2,74));
//	printf("log10(100) = %.1f \n",log10(100.0));
//	printf("sin(30deg.) = %.1f \n",sin(PI/6));
//	printf("cos(60deg.) = %.1f \n",cos(PI/3));
//}

//void main() {
//	char ch;
//	while (ch = _getch() != 'c') {
//		printf("#");
//	}
//	printf("\n");
//	while (!_kbhit()) {
//		putchar('?');
//		/*for (int i = 1;i < 40000;i++) {
//			for (int j = 1;j < 10000;j++);
//		}*/
//		Sleep(500);
//	/*	putchar('!');
//		Sleep(500);*/
//	}
//}

//int main(void) {
//	char c;
//	printf("%c %c \n", toupper('a'), tolower('B'));
//	printf("%d %d \n", isupper('A'), islower('A'));
//
//	for (c = 'a';c <= 'z';c++) {
//		printf("%c의 ASCII 코드 = %x \n", c, c);
//	}
//	return 0;
//}

//void main() {
//	int num;
//	while (1) {
//		printf("특정 정수의 배수 : ");
//		scanf("%d", &num);
//		multiple(num);
//		printf("\n");
//	}
//}

//void main() {
//	int num;
//	while (1) {
//		printf("양 또는 음의정수 입력 : ");
//		scanf("%d", &num);
//		printf("%d의 절대값 : %d\n",num, abs(num));
//	}
//}