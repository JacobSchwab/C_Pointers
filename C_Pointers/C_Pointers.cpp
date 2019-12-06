#include <stdio.h>

void insert(int* x, int sizeof_x, int loc, int value) {
	// YOUR CODE GOES BELOW THIS LINE

	int temp, temp2, count;

	for (int i = 0; i < loc; i++)
		x++;

	temp = *x;
	*x = value;

	count = *x;

	while (count < sizeof(x)*sizeof_x)
	{
		printf("%d", count);
		x++; 
		temp2 = *x;
		*x = temp;
		temp = temp2;
		count= count + sizeof_x;
	}


	// YOUR CODE GOES ABOVE THIS LINE
	return;
}


/**
 * Program for testing array insertion function.
 */
int main()
{
	// Initialize an array, leaving room for an element to be inserted.
	int z[4] = { 1,2,3 };

	// Call the insert() function.
	insert(z, sizeof(z), 1, 5);

	// Output the array as modified by insert().
	printf("[ ");
	int* p;
	for (p = z; p < z + sizeof(z) / sizeof(int); p++) {
		printf("%d ", *p);
	}
	printf("]\n");

	return 0;
}