#include <unistd.h>

/**
* main - Prints "add that piece of art is useful" - Dora Korpar, 2015-10-19",
*	followed by a new line, to standard error.
*/
int main(void)
{
write(2, "and that piece of art is useful\"-Dora Korpar, 2015-10-19\n", 61);

return (1);
}
