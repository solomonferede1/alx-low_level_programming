/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: string
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;
	unsigned int count, before;


	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				before = 0;
				for (k = 0; k < i - 1; k++)
				{
					if (s[i] == s[k])
					{
						before++;
						break;
					}
				}
				if (before == 0)
				{
					count++;
					break;
				}
			}
			j++;
		}
		i++;
	}

	return (count);
}
