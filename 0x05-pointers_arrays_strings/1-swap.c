/**
 * swap_int - swap number
 * @a: first number to be swap
 * @b: second number to be swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
