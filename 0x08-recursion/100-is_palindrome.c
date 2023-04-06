#include "main.h"

/**
 * _strlen_recursion - determines a length of a string
 * @s: string to determine its length
 * Return: number of string length
 */

int _strlen_recursion(char *s)
{
        if (*s == '\0')
                return (0);

        return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome - checks if the word is palindrome
 * @s: string to check
 * @l: left index of a word
 * @r: right index of a word
 * Return: 1 if it is a palindrome after l and r meets in the centre,
 * 0 otherwise
 */

int _is_palindrome(char *s, int l, int r)
{
	if (s[l] == s[r])
		return (1);
	else if (s[l] >= s[r])
		return (0);
	else
		return (_is_palindrome(s, l + 1, r - 1));
}

/**
 * is_palindrome - determines the words if are palindromes
 * @s: word to determine
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (_is_palindrome(s, 0, _strlen_recursion(s)) == 1)
		return (1);
	else
		return (0);
}
