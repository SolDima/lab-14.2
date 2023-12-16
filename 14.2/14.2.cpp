#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#define size  6


int main() {
	int arr[size];
	int i = 0;
	int* pokaz;
	int sum = 0;
	float res;

	pokaz = &arr[0];
	for (i = 0; i < size; i++) {

		printf("Vvedit %d element masivu: ", i + 1);
		scanf("%d", (pokaz + i));

		sum = sum + (*(pokaz + i));

	}

	res = sum / size;

	for (i = 0; i < size; i++) {
		printf("%d elementu masivu: %d\n", i + 1, (*(pokaz + i)));

	}
	printf("seredne znachennya elementiv masivu: %2.f", res);


	return 0;
}