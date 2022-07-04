#include <stdio.h>

/**
 * main - this is the starting point of the code
 * Return - 0 for success
 *
 */

int main(void)
{
	char ch = 'a';

	/* while (ch <= 'z' || ch != 'e' || ch != 'q') */
	do {
		if (ch == 'e' && ch == 'q')
			continue;
		else if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	while (ch <= 'z');
	putchar('\n');
	getchar();
	return (0);
}
