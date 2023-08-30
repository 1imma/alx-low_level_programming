#include "main.h"

/**
 * wildcmp - Compares two strings, allowing for wildcards.
 * @s1: The first string.
 * @s2: The second string with wildcards (*).
 *
 * Return: 1 if strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			/* If s2 ends with*/
			return (1);
		if (*(s1) == '\0')
			/* If s1 is empty, continue matching */
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return wildcmp(s1 + 1, s2 + 1);
	}
	return (0);
}

