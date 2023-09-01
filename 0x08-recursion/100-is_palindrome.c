#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: The string to be toyed with
 * Return: length of string s
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*(s + len))
{ len++, len += _strlen_recursion(s + len); }
return (len); }


/**
 * _palindrome_checker - Checks  if string s is a palindrome.
 * @s: The string to be checked.
 * @len: length of s
 * @index: The index of the string to be checked.
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int _palindrome_checker(char *s, int len, int index)
{
if (s[index] == s[len / 2])
return (1);
if (s[index] == s[len - index - 1])
return (_palindrome_checker(s, len, index + 1));
return (0);
}

/**
* is_palindrome - returns true if the given string is a palindrome
*@s: string to be palindromized (if that's a word, lmao)
*Return: 1 if the string is a palindrome else 0.
*/
int is_palindrome(char *s)
{
int i = 0, len = _strlen_recursion(s);
if (!(*s))
return (1);
return (_palindrome_checker(s, len, i));
}
