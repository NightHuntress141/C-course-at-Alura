#include <stdio.h>

int main(void)
{
	int number;

	printf("What number do you want to know about? \n");
	scanf("%d", &number);

	int i;

	for(i = 1; i <= 10; i++)
	{
		int multiplication = number * i;

		printf("Tabuada: %d x %d = %d \n", number, i, multiplication);
	}
}