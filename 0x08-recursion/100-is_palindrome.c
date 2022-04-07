#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer the string.
 *
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

}
/**
 * palindromeCheck - checks if string is palindrome if not.
 * @s: string to be checked.
 * @l: length of string.
 *
 * Return: 1 or 0.
 */
int palindromeCheck(char *s, int lI, int rI)
{
	if (s[lI] != s[rI])
		return (0);
	else if (lI >= rI)
		return (1);
	else
		return (palindromeCheck(s, lI + 1, rI - 1));

	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to be checked.
 *
 * Return: 0 or 1.
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	return (palindromeCheck(s, 0, i));
}
