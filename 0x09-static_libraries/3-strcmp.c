/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 if both string equal,non-zero otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while ((s1[i] != '\0' && s2[j] != '\0') && s1[j] == s2[j])
	{
		i++;
		j++;
	}

	if (s1[i] == s2[j])
		return (0);

	else
		return (s1[i] - s2[j]);
}
