#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the file you want to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure 
*/
int create_file(const char *filename, char *text_content)
{
        int fh;

        if (!filename)
                return (-1);
        if (text_content == NULL)
        {
                open(filename, O_CREAT | O_TRUNC, 0600);
                return (1);
        }
        fh = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
        if (fh < 0)
        {
               return (-1);
        }
        if (!write(fh, text_content, (sizeof(text_content) - 1)))
        {
                return (-1);
        }
        return (1);
}