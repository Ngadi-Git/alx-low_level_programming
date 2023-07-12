#include <stdlib.h>
#include <stdio.h>

/**
 * wordnos - counts the no of words in a given string
 * @s: pointer to the string
 *
 * Return: No. of words in the string (int)
 */

int wordnos(char *s)
{
	int flgs, cnt, wrds;

	flgs = 0;
	wrds = 0;

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	{
		if (s[cnt] == ' ')
			flgs = 0;
		else if (flgs == 0)
		{
			flgs = 1;
			wrds++;
		}
	}

	return (wrds);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *temp;
	int indx, kay = 0, lent = 0, words, cnt = 0, start, end;

	while (*(str + lent))
		lent++;
	words = wordnos(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (indx = 0; indx <= len; indx++)
	{
		if (str[indx] == ' ' || str[indx] == '\0')
		{
			if (cnt)
			{
				end = indx;
				temp = (char *) malloc(sizeof(char) * (cnt + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[kay] = temp - cnt;
				kay++;
				cnt = 0;
			}
		}
		else if (cnt++ == 0)
			start = indx;
	}

	matrix[kay] = NULL;

	return (matrix);
}
