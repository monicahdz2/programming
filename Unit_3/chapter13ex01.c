#include <stdio.h>

#define ARRAY 10

int values[ARRAY] = {              /* an array of numbers */
	9, 3, 15, 0, 14, -23, -4, 5, -8, 4
};

int i;                      /* index into an array */

int *valuesP;            /* pointer into an array */

int main() {

	/* show the current array contents */
	for (i = 0; i < ARRAY; ++i) {
		printf("values[%d] = %d\n", i, values[i]);
	}

	/* set a pointer to the start of array */
	valuesP = &values[0];

	/* iterate over array, setting each element to 0 */
	for (i = 0; i < ARRAY; ++i) {
		*valuesP = 0;
		++valuesP;
	}

	/* now show the resulting array */
	printf("--------------------\n");
	for (i = 0; i < ARRAY; ++i) {
		printf("values[%d] = %d\n", i, values[i]);
	}

	return(0);
}
