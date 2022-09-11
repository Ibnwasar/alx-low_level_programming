#include <stdio.h>

/**
* main - print the string in the print function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("int: %ld byte(s)\n", sizeof(c));
	printf("int: %ld byte(s)\n", sizeof(i));
	printf("long int: %ld byte(s)\n", sizeof(li));
	printf("long long int: %ld byte(s)\n", sizeof(lli));
	printf("float: %ld byte(s)\n", sizeof(f));
	return (0);
}
