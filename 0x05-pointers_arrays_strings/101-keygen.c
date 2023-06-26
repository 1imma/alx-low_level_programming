#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * generateRandomChar - Generates a random character
 *
 * Return: The generated character
 */
char generateRandomChar(void)
{
	int randomNum = rand() % 62;
	char ch;

	if (randomNum < 26)
		ch = 'A' + randomNum;
	else if (randomNum < 52)
		ch = 'a' + randomNum - 26;
	else
		ch = '0' + randomNum - 52;

	return (ch);
}

/**
 * generateRandomPassword - Generates a random password
 * @password: Pointer to the password array
 */
void generateRandomPassword(char *password)
{
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generateRandomChar();
	}
	password[PASSWORD_LENGTH] = '\0';
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL)); /* Seed the random number generator */

	generateRandomPassword(password);
	printf("Random Password: %s\n", password);

	return (0);
}

