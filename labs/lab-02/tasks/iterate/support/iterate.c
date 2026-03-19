// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "iterate.h"
#include "array.h"

void print_chars(void)
{
	/**	
	 * TODO: Implement function
	 */
	//(void) v;
	char *chr = (char*)&v;
	for (int i = 0; i < sizeof(v); i++) {
		printf("%p -> 0x%hhx\n", chr, *chr);
		chr++;
	}
	printf("-------------------------------\n");
}

void print_shorts(void)
{
	/**
	 * TODO: Implement function
	 */
	short *chr = (char *)&v;
	for (int i = 0; i < sizeof(v); i += 2) {
		printf("%p -> 0x%hx\n", chr, *chr);
		chr += 1;
	}

	printf("-------------------------------\n");
}

void print_ints(void)
{
	/**
	 * TODO: Implement function
	 */
	int *chr = (char *)&v;
	for (int i = 0; i < sizeof(v); i += 4) {
		printf("%p -> 0x%x\n", chr, *chr);
		chr += 1;
	}

	printf("-------------------------------\n");
}

void print_long_longs(void)
{
	/**
	 * TODO: Implement function
	 */
	long long *chr = (char *)&v;
	for (int i = 0; i < sizeof(v); i += 8) {
		printf("%p -> 0x%llx\n", chr, *chr);
		chr += 1;
	}
	printf("-------------------------------\n");
}
