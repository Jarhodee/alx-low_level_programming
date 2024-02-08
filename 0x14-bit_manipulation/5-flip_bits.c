#include "main.h"
/**
 * @n: the number we want to start with
 * @m: the number we want to transform/flip 'n' into
 * Return: the number of difference or bit required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_operation;

	unsigned long int i, count, bit_range = sizeof(unsigned long int) * 8;

	i = 0;
	count = 0;
	
	while (i < bit_range)
	{
		XOR_operation = (n ^ m) >> i;
		
		if (XOR_operation & 1)
			count++;
		i++;
	}
	return (count);
}