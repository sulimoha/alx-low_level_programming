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
	char c = sizeof(c);
	int i = sizeof(i);
	float f = sizeof(f);
	char mf[] = "Size of a float: %d byte(s)\n";
	char mli[] = "Size of a long int: %d byte(s)\n";
	char mi[] = "Size of an int: %d byte(s)\n";
	char mc[] = "Size of a char: %d byte(s)\n";
	char mlli[] = "Size of a long long int: %d byte(s)\n";
/**
 * printf - prints a string size of data typr in byte(s)
 * @c: c
 * @mc: messag
 * @mi: message
 * @mli: messagel
 * @mlli: messagell
 * @mf: messagef
 * @sizeof(c): sizeof(c)
 *
 * Prints a message
 * Return a message
*/
	printf(mc, c);
	printf(mi, i);
	printf(mli, sizeof((long)i));
	printf(mlli, sizeof((long long)i));
	printf(mf, sizeof(f));
	return (0);
}
