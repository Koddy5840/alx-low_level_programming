#include "main.h"
/**
 * jack_bauer - this is the main function
 * @ a: parameter of the funtion
 * Return: always o
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
	for (b = 0; b < 60; b++)
	{
	_putchar(a / 10 + 48);
	_putchar(a % 10 + 48);
	_putchar(':');
	_putchar(b / 10 + 48);
	_putchar(b % 10 + 48);
	_putchar('\n');
	}
	}
}
