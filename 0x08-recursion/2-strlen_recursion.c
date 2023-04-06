#include "main.h"
/**
 * _strlen_recursion - this is the main function
 * @s: parameter of the function
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}

	return (lenght);
}
