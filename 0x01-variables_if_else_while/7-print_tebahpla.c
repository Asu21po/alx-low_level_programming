#include <stdio.h>

/**
 * main - prints the lower case alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	int n = 12;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
