#include <stdio.h>
/**
 * main - entry point
 * @void: no parameters
 *
 * Entry point
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	double d;
	float f;
/**
 * printf - prints a string using printf
 * @message1: message
 * @message2: message
 * Prints a message
 * Return a message
 */
	printf("Size of a char: % dbyte(s)\n", sizeof(c));
	printf("Size of an int: % dbyte(s)\n", sizeof(i));
	printf("Size of a long int: % dbyte(s)\n", sizeof((long)i));
	printf("Size of a long long int: % dbyte(s)\n", sizeof((long)(long)i));
	printf("Size of a float: % dbyte(s)\n", sizeof(f));
	return (0);
}
