#include "main.h"
/**
 * get_endianness - checks the endianness of a particular system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{

	int data = 0x01;
	
	char *byte_ptr = (char *)&data;

	
	if (*byte_ptr == 0x01)
		return (1);
	else
		return (0);
}