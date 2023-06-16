#include<stdio.h>
/**
 * main - Entry point of program
 * Description: Prints the size of various types on the computer
 *              Uses the sizeof operator and printf function.
 * Return: always 0 (indicate the successful excution)
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of float: %zu byte(s)\n", sizeof(float));

	return (0);
}
