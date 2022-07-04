#include <stdlib.h>

/**
 * main - main
 *
 * Return: c
 */
int main(void)
{
	int c;
	c = system ("export var_ s= How are you?");
	c = system ("echo $var_s");
	c = 1;
	return (c);
}
