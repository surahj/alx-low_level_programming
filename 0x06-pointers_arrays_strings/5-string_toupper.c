/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change to upper case
 * Return: return changed string
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else
			s[i] = s[i];
	}
	return (s);
}
