/**
 * swap_int - function that swaps
 * the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
*/

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
