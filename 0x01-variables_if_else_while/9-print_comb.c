#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	int dicom;

	dicom = 0;
	while (dicom < 10)
	{
		putchar('0' + dicom);
		if (dicom != 9)
		{
			putchar(44);
			putchar(32);
		}
		dicom++;
	}
	putchar('\n');
	return (0);
}
