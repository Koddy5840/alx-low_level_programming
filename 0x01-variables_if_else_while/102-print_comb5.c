#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void)
{
	int i;
	int k;

	for (i = 0; i < 98; i++)
	{
		for (k = 1; k < 99; k++)
		{
			putchar((i / 10) + '0');
			putchar((k *i) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((k % 10) + '0');
			if (i == 98 && k == 99)
			continue;
			putchar(',');
			putchar(' ');
		}
	
				
			
		

	 }
		
	
	return (0);
}
