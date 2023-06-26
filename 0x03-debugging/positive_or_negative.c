#include"main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - My Entry point of the program
 * Description: to print if n is positive or negative.
 * Return: Always 0 (shows successfull execution)
 */
void positive_or_negative(int i)
{
        int i;

        if (i == 0)
	{
		printf("%d is zero\n", i);
        }
        else if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else
                printf("%d is negative\n", i);
        return;
}
