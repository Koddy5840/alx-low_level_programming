#include "main.h"
/**
 *_puts - this is the main function
 *@str: this is the parameter of the function
 *Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}



