#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Handle sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Convert string to integer */
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';
			
			if (result > (INT_MAX - digit) / 10)
			{
				if (sign == -1)
					return (INT_MIN);
				else
					return (INT_MAX);
			}

			result = (result * 10) + digit;
			i++;
		}
		else
		{
			break;
		}
	}

	return (result * sign);
}

