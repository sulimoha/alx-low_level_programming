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
	int i;
	int a = sizeof(i);
	float f;
	int b = sizeof(f);
	char c;
	int e = sizeof(c);
	char n[] = "Size of a long long int: %d byte(s)\n";
	char o[] = "Size of a float: %d byte(s)\n";
	char l[] = "Size of an int: %d byte(s)\n";
	char k[] = "Size of a char: %d byte(s)\n";
	char m[] = "Size of a long int: %d byte(s)\n";
/**
 * printf - prints a string size of data typr in byte(s)
 *@a: a
 *@b: b
 *@e:e
 *
 * Prints a message
 * Return a message
*/
	printf(k, sizeof(c));
	print((l, sizeof(i));
	printf(m, sizeof((long)i));
	printf(n, sizeof((long long)i));
	printf(o, sizeof(f));
	return (0);
}
