#include "main.h"

/**
 *is_palindrome_recurs - performs recursive check for palindrome
 *@s: input string to be checked
 *@start: starting index for the substring being checked
 *@end: ending index for the substring being checked
 *
 *Return: return 1 if string is palindrome 0 otherwise
 */


int is_palindrome_recurs(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_recurs(s, start + 1, end - 1));
}

/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: is the string
  * Return: return 1 if the string is a palindrome or 0 otherwise
**/

int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (is_palindrome_recurs(s, 0, length - 1));
}
