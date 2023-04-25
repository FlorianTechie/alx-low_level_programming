#include "main.h"

/**
* print_last_digit - a function that prints the last digit of a number
* @n: number last digit result
* Return: value of the last digit
*/
int print_last_digit(int n)
{
	int x;

	x = (n % 10);

	if (x < 0)
	{
		x = (-1 * x);
	}
	_putchar(x + '0');
	return (x);
}
