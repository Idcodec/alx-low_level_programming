#include<stdio.h>

/**
* main - the main function
* Return: returns 1
*/
int main(void)
{
	char qt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qt, 59);
	return (1);
}
