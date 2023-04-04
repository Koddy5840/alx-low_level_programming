#include "main.h"
/**
 *_memset- This is the main function
 *@s: first parameter of the function
 *@b: second parameter of the function
 *@n: third parameter of the function
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
