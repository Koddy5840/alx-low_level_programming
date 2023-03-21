#include "main.h"

/**
 * print_alphabet - main funtion
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i + 0);
	}
	_putchar('\n');
}
