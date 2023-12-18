#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#define size  6


int main() {
	int arr[size];
	int i = 0;
	int* pokaz;                                         // Ініціалізація змінних, масиву та вказівника
	int sum = 0;
	float res;

	pokaz = &arr[0];
	for (i = 0; i < size; i++) {

		printf("Vvedit %d element masivu: ", i + 1);                        // Цикл введення елементів масиву та обчислення їх суми
		scanf("%d", (pokaz + i));

		sum = sum + (*(pokaz + i));

	}

	res = sum / size;                                                        // розрахунок середньго значення

	for (i = 0; i < size; i++) {                                             // Вивід елементів мачсиву
		printf("%d element masivu: %d\n", i + 1, (*(pokaz + i)));

	}
	printf("\nseredne znachennya elementiv masivu: %2.f\n", res);               // Вивід середньго значення


	return 0;
}