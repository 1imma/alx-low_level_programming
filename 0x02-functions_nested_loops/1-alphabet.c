#include"main.h"

/**
 * Function - print the alphabet in lowercase
 * Description: function to print alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
