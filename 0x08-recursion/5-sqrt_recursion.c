#include "main.h"
int sqrt_helper(int n, int guess);
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root is to be calculated.
 *
 * Return: The natural square root of the number.
 * If n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 1));
}
/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number whose square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of the number.
 * If n does not have a natural square root, returns -1.
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (sqrt_helper(n, guess + 1));
}
