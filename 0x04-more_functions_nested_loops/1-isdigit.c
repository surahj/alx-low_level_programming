/**
 * _isdigit - check if number is a digit
 * @c: number to be check
 * Return: 1 if number, 0 otherwise
 */

int _isdigit(int c)
{
	int i, result;

	for (i = 0; i <= 9; i++)
	{
		if (i == c)
		{
			result = 1;
			break;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
