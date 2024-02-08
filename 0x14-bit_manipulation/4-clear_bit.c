#include "main.h"
/**
 * @n: the number we want to set it bit value at particular index
 * @index: the index of the binary bits statring from 0
 * Return: 1 if success or -1 if an error occcured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask = 1 << index;

	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = *n & (~bit_mask);

	return (1);
}