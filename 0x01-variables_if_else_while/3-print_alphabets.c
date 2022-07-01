#include<stdio.h>

/**
* main - two loops that print the alphabet lower and upper case
* Return: returns 0
*/
int main(void)
{
	int ch;
	int hc;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (hc = 'A'; hc <= 'z'; hc++)
		putchar(hc);
	putchar('\n');
	return (0);
}
