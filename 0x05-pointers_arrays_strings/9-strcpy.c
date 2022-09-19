#include "main.h"

/**
*_strcpy - this function copy the pointer to variable
*@src: is the pointer original
*@dest: is the pointer the destiny
*Return: d.
*/

char *_strcpy(char *dest, char *src)
{
char *d = dest;

for (; *src != '\0' ; src++)
{
*dest = *src;
dest++;
}
*dest = *src;
return (d);
}
