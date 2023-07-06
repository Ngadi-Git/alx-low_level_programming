#include "main.h"

/**
 *str_lenght - checks the length of a string
 *@s: is the string
 *
 * Return: return the length of the string
 */

int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_length(s + 1));
}

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
	int length = str_length(s);

	return (is_palindrome_recurs(s, 0, length - 1));
}
