#include "main.h"
/**
 *_memcpy - this is the main function
 *@dest: first parameter of the function
 *@src: second parameter of the function
 *@n: Third parameter of the fuction
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b;

	b = n;
	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
