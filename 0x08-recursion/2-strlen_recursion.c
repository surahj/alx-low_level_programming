/**
 *_strlen_recursion - return length of a string
 *@s: string to return is length
 *Return: length
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s)
		return (len + _strlen_recursion(s + 1));
	else
		return (0);
}

