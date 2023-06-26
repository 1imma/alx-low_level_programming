#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @str: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index;
	int i;

	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length - 1);

	for (i = start_index; i < length; i++)
		putchar(str[i]);

	putchar('\n');
}

