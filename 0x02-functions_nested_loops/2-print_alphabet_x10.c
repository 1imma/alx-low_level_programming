#include"main.h"

/**
 * print_alphabet_x10 - Function to print 10 times alphabet
 *
 * Description: print 10 times alphabet in lowercase
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 1; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
