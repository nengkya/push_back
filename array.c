#include <stdio.h>

int main() {
	/*	array declare and init 
		data_type array_name [size] = {value_1 .. value_n};
	*/
	int array_a[]  = {0, 1, 2, 3, 4, 5};
	int array_b[6] = {0, 1, 2, 3, 4, 5};
	int * pointer_to_array_a = array_a;

	for (int i = 0; i <=6; i++) {
		array_a[i] = i;
		printf("%d\n", * pointer_to_array_a);
		printf("%d\n", array_a[i]);
	}
}
