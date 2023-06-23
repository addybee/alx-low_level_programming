/**
 * _isupper - check if a character is upper case
 * @c: hold the charcter to be checked
 * Return: 1 if it's true and 0 if false
 */
int _isupper(int c)
{
	char i;

	/*char ch[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";*/
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
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
