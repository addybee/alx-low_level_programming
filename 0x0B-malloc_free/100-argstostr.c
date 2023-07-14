#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguement in the program
 * @av: array of the arguement pass in the program
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k;

	i = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (j = 0; av[k][j]; j++)
			i++;
	}
	p = malloc((i + ac + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	i = 0;
	for (k = 0; k < ac; k++)
	{
		for (j = 0; av[k][j]; j++)
		{
			p[i] = av[k][j];
			i++;
		}
		p[i] = '\n';
		i++;
	}
	p[i] = '\0';
	return (p);
}
