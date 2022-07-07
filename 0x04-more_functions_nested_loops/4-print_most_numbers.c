#include "main.h"

/**
* print_most_numbers  - prints numbers 0 to 9, ten times
* Return: returns nothing
*/
void print_most__numbers(void)
{
int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
