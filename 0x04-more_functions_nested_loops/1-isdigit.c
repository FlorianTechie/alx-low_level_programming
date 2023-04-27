#include "main.h"

/**
* _isdigit - checks for checks for a digti (0 through 9).
* @c: c - variable
* Return: Always return 0.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
