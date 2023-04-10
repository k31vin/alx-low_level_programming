#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flp_bit(unsigned long int n, unsigned long int m)
{
        unsigned long int bt, chek;
        unsigned int num, i;

        chek = 1;
        bt = n ^ m;
        num = 0;

        for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
        {
                if (chek == (bt & check))
                        num++;
                chek <<= 1;
        }
        return (num);
}
