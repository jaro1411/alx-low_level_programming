#include "main.h"

/**
 *swap_int-swap the two integer values they are holding
 *@a : first parameter
 *@b : second parameter
 */

void swap_int(int *a, int *b)

{
	int m = *a;
	*a = *b;
	*b = m;
}

