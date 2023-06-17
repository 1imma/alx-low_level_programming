#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point of the program
 *
 * Description: "and that piece of art is useful\" - Dora Korpar, 2015-10-19,"
 * to the standard error using the write function.
 * Return: Always 1 (shows unsuccessful execution)
 */
int main(void)
{
	char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n";
	ssize_t len = strlen(m);

	if (write(STDERR_FILENO, m, len) != len)
		return (1);

	return (1);
}

