#include"main.h"

/**
 * main - The Entry point of the program
 *
 * Description: prints _putchar, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char message[] = "_putchar\n";
	int i;

	for (i = 0; message[i] != '\0'; i++)
	{
		_putchar(message[i]);
	}

	return (0);
}
