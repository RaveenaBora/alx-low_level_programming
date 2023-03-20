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
	int n, b, c;

	for (n = '0'; n <= '9'; n++)
		for (b = n + 1; b <= '9'; b++)
			for (c = b + 1; c <= '9'; c++)
			{
				putchar(n);
				putchar(b);
				putchar(c);
				if (!(n == '7' && b == '8' && c == '9'))
				{
				putchar(',');
				putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}



