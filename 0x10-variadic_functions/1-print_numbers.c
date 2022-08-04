#include "variadic_functions.h"

/**
* print_numbers - a function that prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argument;
	unsigned int i;
	int j = n - 1;

	va_start(argument, n);

	if (n != 0)
	{
		for (i = 0; i < j; i++)
		{
			if (separator != NULL)
			{
				print("%d%S", va_arg(argument, int), separator);
			}
			else
			{
				printf("%d", va_arg(argument, int));
			}
		}
		printf("%d", va_arg(argument, int));
		va_end(argument);
	}
	printf("\n");
}
