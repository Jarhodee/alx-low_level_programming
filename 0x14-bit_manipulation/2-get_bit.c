#include "main.h"
/**
 * @n: the number we want to get it bit value at particular index
 * @index: the index of the binary bits statring from 0
 * Return: the value of the bit at index index or -1 if an error occcured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (n & (1 << index))
		return (1);
	else
		return (0);
}