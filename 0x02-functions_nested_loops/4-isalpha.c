/**
 * _isalpha - check for alphabetic character
 * @c: stores the character to be checked
 * Return: TRUE (1) else FALSE (0)
 */
int _isalpha(int c)
{
	int i;
	char lt[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWSYZ";

	for (i = 0; i < 52; i++)
	{
		if (c != lt[i])
		{
			continue;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
