/**
 * _isupper - check if character is upper
 * @c: character to be checked
 * Return: 1 if is upper
 */

int _isupper(int c)
{
	int i, result;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
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
