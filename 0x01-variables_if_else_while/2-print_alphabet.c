#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print alphabets in lowercase followed by a new line
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lAlphabet;

	/*to Print lowercase alphabets from 'a' to 'z' */
	for (lAlphabet = 'a'; lAlphabet <= 'z'; lAlphabet++)
	{
		putchar(lAlphabet);
	}
	putchar('\n');

	return (0);
}

