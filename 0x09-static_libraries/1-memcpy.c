#include "main.h"
/**
 *_memcpy -function program that copies memory area
 *@dest: memory to be stored
 *@src: memory to be copied
 *@n: number of bytes
 *
 *Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index = 0;
	int j = n;

	for (; index < j; index++)
	{
		dest[index] = src[index];
		n--;
	}
	return (dest);
}
