#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by \n.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);

		printf("%d\n", a[n - 1]);
	}
}

