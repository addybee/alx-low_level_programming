#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int pwdlen, index;
	pwdlen = 8;
	char pwd[pwdlen + 1];

	srand(time(NULL));
	for (index = 0; index < pwdlen; index++)
	{
		pwd[index] = (' ' + (rand() % 94));
	}
	pwd[pwdlen] = '\0';
	printf("%s\n", pwd);


}
