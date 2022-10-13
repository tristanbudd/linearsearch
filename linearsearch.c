#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
	int numbers[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = 0;
	int ii = 0;
	int input1;

	while (i < 10) {
		int randomNumber = rand() % 10 + 1;

		for (ii = 0; ii < i; ii++)
		{
			if (numbers[ii] == randomNumber) {
				break;
			}
		}
		if (ii == i) {
			numbers[i++] = randomNumber;
		}
	}

	printf("Printing Index:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("Index %d: %d\n", i, numbers[i]);
	}

	printf("Please Input A Number 1-10 To Search List:\n");
	scanf_s("%d", &input1);

	for (int i = 0; i < 10; i++)
		if (input1 == numbers[i])
		{
			printf("Your Number Was Found At Index: %d", i);
		}


	return 0;
}