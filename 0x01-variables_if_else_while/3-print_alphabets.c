#include <stdio.h>

/**
 * main - this is the starting point of the program
 * Return - 0 for success
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	getchar();
	return (0);
}
