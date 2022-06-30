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
	char message1[] = "%s with proper grammar,";
	char message2[] = "%s but the outcome is a piece of art,\n";
/**
 * printf - prints a string using printf
 * @message1: message
 * @message2: message
 * Prints a message
 * Return a message
 */
	printf(message1, message2);
	return (0);
}
