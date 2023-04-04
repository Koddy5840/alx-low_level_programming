#include "main.h"
/**
 * _strchr - This is the main function
 *@s: first parameter of the fuction
 *@c: second parameter of the functon
 *Return: always 0
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
