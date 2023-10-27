#include "main.h"
/**
 * _strncat - function thaat concat two strings
 * using at most n bytes from src
 * @dest: enter value
 * @src: enter value
 * @n: enter value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x;
int y;

x = 0;
while (dest[x] != '\0')
{
	x++;
}
y = 0;
while (y < n && src[y] != '\0')
{
	dest[x] = src[y];
	x++;
	y++;
}
dest[x] = '\0';
return (dest);

}
