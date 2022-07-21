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
	int a;
	if (i * i < n)
	{
		i++;
		sqf(i, n);
	}
	if (i * i == n)
	{
		a = i;
		return (a);
	}
	a = -1;
	return (a);
}
