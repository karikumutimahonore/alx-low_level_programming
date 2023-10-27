#include "main.h"
/**
 * _isalpha - verified alphabetic character
 * @c: verified char
 * Return: 1 otherwise 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
