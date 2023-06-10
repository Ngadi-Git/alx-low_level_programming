#include "main.h"

/**
 *rev_string - reverse the string.
 *@s: pointer to string.
 *
 *Return: void.
 */

void rev_string(char *s)
{
	int start, end;
	int length = 0;

	while (s[length] != '\0')
		length++;

	start = 0;
	end = length - 1;

	while (start < end)
	{

	char temp = s[start];

	s[start] = s[end];
	s[end] = temp;

	start++;
	end--;
	}
}
