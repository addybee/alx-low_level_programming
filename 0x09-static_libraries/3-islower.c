/**
 * _islower - check if a character is lower case
 * @c: hold the charcter to be checked
 * Return: 1 if it's true and 0 if false
 */
int _islower(int c)
{
	int i;
	char lc[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (c == lc[i])
		{
			return (1);
		}
		else
		{
			continue;
		}
	}
	return (0);
}
