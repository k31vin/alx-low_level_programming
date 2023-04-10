#include "main.h"

/**
 *: Returns the value of a bit at a given index.
 * The bits
 * index to check bit and get value
 *
 * Return: -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
        if (index >= (sizeof(unsigned long int) * 8))
                return (-1);

        if ((n & (1 << index)) == 0)
                return (0);

        return (1);
}
