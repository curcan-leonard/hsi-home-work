// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "binary_search.h"

int binary_search(int *v, int len, int dest)
{
	int start = 0;
	int end = len - 1;
	int middle;
	main:
		if (start > end) {
			return -1;
		}
		middle = (int)((end + start) / 2);

		if (v[middle] < dest) {
			goto bigger;
		} 
		if (v[middle] > dest) {
			goto smaller;
		}
		if (v[middle] == dest) {
			goto Return;
		}

	smaller:
		end = middle - 1;
		goto main;
	bigger:
		start = middle + 1;
		goto main;
	/**
	 * TODO: Implement binary search
	 */
	Return:
	return middle;
}
