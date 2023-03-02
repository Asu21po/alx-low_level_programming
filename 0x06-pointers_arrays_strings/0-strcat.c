#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: input value
 * @scr: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *scr)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
