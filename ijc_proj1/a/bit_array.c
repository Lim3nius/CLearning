#include <stdlib.h>
#include "bit_array.h"
#include <stdio.h>

//#define ba_create(arr_name, size) \
		unsigned long arr_name[size]; \
		arr_name[0] = size
//
// Nothing here
//
int main(){
		ba_create(pole, 100);
		printf("Size of array is |%d|\n", pole[0]);
		printf("Size of array in bits is |%ld|\n", ba_size(pole));
		printf("Size of long long %d\n", sizeof(long long));
		printf("Size of long %d\n", sizeof(long));
		return 0;
}
