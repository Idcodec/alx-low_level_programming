#include <stdio.h>

/**
* main - a program that prints its name
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
* Return: returns 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)argc;
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
