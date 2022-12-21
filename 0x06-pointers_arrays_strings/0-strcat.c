#include "main.h"
/**
 * strcat - concatnates the string pointed to by @src,
 * including the x null bytes.
 * @dest: a pointer to the string to be concatnated.
 * src: the sorce string to be appended to @dest.
 * Return: apointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	(forindex = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
