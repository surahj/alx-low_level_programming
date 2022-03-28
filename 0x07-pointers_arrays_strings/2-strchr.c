/**
 * _strchr - locates a character in a string
 * @s: string to be search
 * @c: character to search for
 * Return: a pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
