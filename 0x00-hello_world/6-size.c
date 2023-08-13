#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * return 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
