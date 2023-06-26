#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD_LENGTH 6

/**
 * generatePassword - Generates a password based on the given index
 *
 * @index: The index used to generate the password
 * @password: The generated password
 */
void generatePassword(int index, char *password)
{
    int i;
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int numCharacters = strlen(characters);

    for (i = PASSWORD_LENGTH - 1; i >= 0; i--)
    {
        password[i] = characters[index % numCharacters];
        index /= numCharacters;
    }

    password[PASSWORD_LENGTH] = '\0';
}

/**
 * crackme - Simulates the crackme program
 *
 * @password: The password to check
 * @return: 1 if the password is correct, 0 otherwise
 */
int crackme(char *password)
{
    if (strcmp(password, "Tada!") == 0)
    {
        printf("Congrats\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int index = 0;

    while (1)
    {
        generatePassword(index, password);
        if (crackme(password))
        {
            break;
        }
        index++;
    }

    return 0;
}

