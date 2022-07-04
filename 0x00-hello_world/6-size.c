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
*
*/
	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof((long)i));
	printf("Size of a long long int: %d byte(s)\n", sizeof((long long)i));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
