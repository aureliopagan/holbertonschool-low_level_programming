#include "main.h"
/**
 * _strstr - namo of funtion five
 *
 * @haystack: name variable
 * @needle: the other name
 *
 * Return: p or null
 */

char *_strstr(char *haystack, char *needle)
{
	const char *hay;
	const char *nee;
		nee = needle;

		if (*nee == 0)
		{
			return (haystack);
		}
		for (; *haystack != 0; haystack += 1)
		{
			if (*haystack != *nee)
			{
				continue;
			}
			hay = haystack;

			while (1)
			{
				if (*nee == 0)
				{
					return (haystack);
				}
				if (*hay++ != *nee++)
				{
					break;
				}
			}
			nee = needle;
		}
		return ('\0');
}
