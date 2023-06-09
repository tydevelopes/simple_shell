#include "main.h"

/**
 * _strdup - create duplicate of str
 * @str: pointer to string to be duplicated
 * Return: pointer to the duplicated string
 */

char *_strdup(const char *str)
{
	unsigned int i;
	unsigned int len;
	char *dup_str = NULL;

	if (str == NULL)
		return (NULL);

	len = _strlen(str) + 1;

	dup_str = malloc(sizeof(char) * len);

	if (dup_str != NULL)
	{
		for (i = 0; i < len; i++)
			dup_str[i] = str[i];
	}
	return (dup_str);
}
