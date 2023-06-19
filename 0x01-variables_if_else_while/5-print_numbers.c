#include<stdio.h>
/**
 * main - the Entry point of program
 *
 * Description: print all base ten numbers from 0
 *
 * Return: 0 (indacate success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
