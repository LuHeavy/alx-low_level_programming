#include "main.h"

/**
 * _isupper - cheks for lowercase characters
 *
 * @c: the character to be checked
 *
 * Return: 1 for upercase characer or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
