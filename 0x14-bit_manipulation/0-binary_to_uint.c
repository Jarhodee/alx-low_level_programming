#include "main.h"

/**
 * binary_to_uint - converst a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 * Return: the converted number, or
 * 0 if there is one or more chars in string b
 * that is not 0 or 1 or when b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	
	unsigned int converted = 0, exp = 0;
	
	int len_th = 0, i;

	
	if (b == NULL || *b == '\0')
		return (0);

	
	for (; b[len_th] != '\0'; len_th++)
	{
		if (b[len_th] != '0' && b[len_th] != '1')
			return (0);
	}

	
	for (i = len_th - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		
			exp++;
			continue;
		}
		if (b[i] == '1')
		{
			converted += 1 << exp;
			exp++;
		}
	}

	return (converted);
}