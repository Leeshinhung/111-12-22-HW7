#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX 80
int main(void) {
	FILE *fptr;
	char str[MAX];
	int bytes;
	fptr = fopen("output.txt", "r");
	while (!feof(fptr)) {
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause");
	return 0;
}