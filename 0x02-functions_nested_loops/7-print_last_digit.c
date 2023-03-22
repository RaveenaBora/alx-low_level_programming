#include "main.h"
/**
 * print_last_digit - prints the last digits of any number
 * @a: the int value to be acted upon
 * Return: returns the last digit to calling function
*/
int print_last_digit(int a)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	-putchar(a * '0');
	return (a);
	}
}
