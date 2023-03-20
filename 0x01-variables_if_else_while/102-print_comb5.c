#include <stdio.h>
/**
  *main - entry point
  *Description: "print combination of numbers"
  *Return: always 0
  *
  *Declare variable n that will act as  counter
  *Write a for loop to loop through 0-9
  *print the numbers
  *Write an if statement
  *print new line
  */
int main(void)
{
	int n, b, c, d;

	for (n = '0'; n <= '9'; n++)
		for (b = '0'; b <= '9'; b++)
			for (c = '0'; c <= '9'; c++)
				for (d = '0'; d <= '9'; d++)
				{
					putchar(n);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (!(n == '8' && b == '9'))
					{
					putchar(',');
					putchar(' ');
					}
				}
	putchar('\n');
	return (0);
}



