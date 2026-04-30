// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "rotate.h"

void rotate_left(unsigned int *number, int bits)
{
	unsigned int bits_mask = -1;

	bits_mask <<= (sizeof(*number) * 8 - bits);
	bits_mask &= (*number);
	bits_mask >>= (sizeof(*number) * 8 - bits);
	(*number) <<= bits;
	(*number) |= bits_mask;
}

void rotate_right(unsigned int *number, int bits)
{
	unsigned int bits_mask = -1;

	bits_mask >>= (sizeof(*number) * 8 - bits);
	bits_mask &= (*number);
	bits_mask <<= (sizeof(*number) * 8 - bits);
	(*number) >>= bits;
	(*number) |= bits_mask;
}
