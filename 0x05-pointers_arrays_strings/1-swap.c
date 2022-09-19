/**
*swap_int - swaps the values of two integers
*using two inputs parameters
*
*@a: input parameter 1
*@b: input parameter 2
*
*Return: Nothing
*/

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
