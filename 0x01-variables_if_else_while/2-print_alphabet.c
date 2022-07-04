#include <stdio.h>

/**
 * main - returns the letters of alphabets in char format
 * return - 0 is success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	getchar();
	return (0);
}
