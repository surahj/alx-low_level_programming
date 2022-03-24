/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: size of the array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
