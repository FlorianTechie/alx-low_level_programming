#include <stdio.h>

/**
* main - Entry point
* Return: 0
*/

int main(void)
{
	long dinum = 612852475143, i;

	while (i < (dinum / 2))
	{
		if ((dinum % 2) == 0)
		{
			dinum /= 2;
			continue;
		}

		for (i = 3; i < (dinum / 2); i += 2)
		{
		if ((dinum % i) == 0)
			dinum /= i;
		}
	}
	printf("%ld\n", dinum);

	return (0);
}
