#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

void main() {
	int num;
	char ch;
	srand(time(NULL));
	while (!_kbhit()) {
		Sleep(1000);
			num = rand() % 5;
			switch (num) {
			case 0: printf("��\n");break;
			case 1: printf("��\n");break;
			case 2: printf("��\n");break;
			case 3: printf("��\n");break;
			case 4: printf("��\n");break;
			default: break;
		}
	}
}