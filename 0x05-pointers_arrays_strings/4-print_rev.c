#include "main.h"

/**
  * print_rev - prints a string, in reverse followed by a newline
  * @s: input string
  *Return: no return
  */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
