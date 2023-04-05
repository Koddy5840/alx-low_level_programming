#include "main.h"
/**
 *_puts_recursion - this is the main function
 *@s: parameter of the fuction
 *Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i < 19; i++)
	_putchar(s[i]);
	_putchar('\n');
}
