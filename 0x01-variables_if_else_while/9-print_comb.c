#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i, j;
		for (i = 0; i < 10; i++)
		{
			for (j = i; j < 10; j++)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
				if (i != 9 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	return (0);
}
