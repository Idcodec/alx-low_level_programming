#include "main.h"

/**
* print_numbers - prints the numbers 0 to 9
* Return: returns nothing
*/
void print_numbers(void)
{
	int k;
	for ( k = 0 ; k < 10; k++)
	putchar (k + '0');
	putchar ('\n');
}
