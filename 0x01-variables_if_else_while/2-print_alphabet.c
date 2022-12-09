#include <stdio.h>

/**
 * main - print the letter of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(0);
	return (0);
}
