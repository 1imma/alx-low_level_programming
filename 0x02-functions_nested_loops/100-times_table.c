#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to print the times table for
 */
void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
