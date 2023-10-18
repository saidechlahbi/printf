#include "main.h"
/**
 * sel_md - reverseArrayInPlace
 *
 * @array: array to be reversed
 *
 * Return: renverse string
 */
char *sel_md(char *array)
{
int langueur = 0;
int m, n;
	char *renverse;

	if (array == NULL)
		return (NULL);

	while (arr[langueur] != '\0')
		langueur++;

	renverse = malloc(langueur + 1);
	if (renverse == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = langueur - 1; j >= 0; i++, j--)
	{
		renverse[m] = array[n];
	}

	renverse[m] = '\0';
	return (renverse);
}
