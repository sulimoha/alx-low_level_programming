#include "main.h"
#include "_putchar.c"
int _strlen_recursion(char *s);
int strcom(char *a);
/**
*_strlen_recursion - returns the length of a string.
* @s : a pointer to a string 
*
* Return: int
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
/**
 *comstr - returns string comparison result
 * @a : a string to be revrsed
 *
 * Return: int
*/

int comstr(char *a)
{
	int len;

	if (*a == '\0')
	{
		return (1);
	}
	len = _strlen_recursion(a) - 1;
	if (*a == a[len])
	{
		a++;
		len--;
	}
	else
	{
		return (0);
	}
	return (1);
}
/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s : a string
 *
 * Return: int
*/
int is_palindrome(char *s)
{
	return (comstr(s));
}
