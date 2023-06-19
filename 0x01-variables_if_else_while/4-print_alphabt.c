#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: print lowercase letter except "q" and "e"
 * Return: 0 (Success)
 */
int main(void)
{
	char letterAlph;

	for (letterAlph = 'a'; letterAlph <= 'z'; letterAlph++)
	{
		if (letterAlph != 'q' && letterAlph != 'e')
			putchar(letterAlph);
	}

	putchar('\n');

	return (0);
}

