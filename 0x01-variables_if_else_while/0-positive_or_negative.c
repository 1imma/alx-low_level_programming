#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - My Entry point of the program
 * Description: to print if n is positive or negative.
 * Return: Always 0 (shows successfull execution)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("the number: %d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("the number: %d is positive\n", n);
	}
	else
		printf("the number : %d is negative\n", n);
	return (0);
}
