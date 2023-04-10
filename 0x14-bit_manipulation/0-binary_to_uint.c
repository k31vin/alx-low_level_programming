#include "main.h"
/**
 * converts a binary to an unsigned int.
 * returns 0 if b i snull or mantains chars 
 * else convert the no.
 */

unsigned int bin-to_init(const char *b)
{	
	int len;	
	unsigned int num;

	num=0;
	if (!b)
		return (0);
	for (len = 0; b[len] '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
	{
		num <<= 1;
		if (b[len] == '1')
			num+= 1;
	}
	return (num);
}
