#include "main.h"
/**
 * _strspn - this is the main function
 *@s: First parameter of the function
 *@accept: Second parameter of the function
 *Return: a;
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	int b;

	a = 0;
	b = 0;
	while (*s)
	{
		for (; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
					return (a);
		}
	s++;
	}
	return (a);
}
