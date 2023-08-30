#include "holberton.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number whose factorial is to be calculated.
 * Return: The factorial of the number. If n is negative, returns -1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

