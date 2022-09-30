#include <stdio.h>
#include "main.h"

/**
*main - function that prints the number of arguments passed into it.
*@argc: argument count.
*@argv: argument vector.

 *Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
