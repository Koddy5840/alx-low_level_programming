#include "main.h"
/**
 *print_sign - this is the main function
 * @n: parameter of the function
 *Return: return 1  if is grater than 0 and return 1 when is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);

	}
}
