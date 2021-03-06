#include "main.h"
#include <stdio.h>

int sqf(int i, int n);

/**
 *_sqrt_recursion - the natural square root of a number.
 * @n : a number to find the sqrt for
 *
 * Return: int
*/
int _sqrt_recursion(int n)
{
	return (sqf(0, n));
}

/**
 *sqf - returns the natural square root of a number startting from zero.
 * @i :  intiial guess
 * @n : a number to find the sqrt for
 *
 * Return: int
*/
int sqf(int i, int n)
{

	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqf(i + 1, n));
}
