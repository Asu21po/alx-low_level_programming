#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabets in reverse
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
