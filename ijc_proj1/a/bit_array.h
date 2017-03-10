#ifndef BIT_ARRAY_H
#define BIT_ARRAY_H

#define HODNOTA 100
enum vycet{VELIKOST_POLE_BASIC = 100};
enum arr_indexes{UNITS, INDEX,TMP, TMP2};
unsigned long arr_values[8];
typedef unsigned long* bit_array_t;

#define ba_create(array_name, size) \
		unsigned long array_name[HODNOTA]; \
		array_name[0]=size

#define ba_set_bit(array_name, size, value)

#define ba_get_bit(array_name, size) \
		arr_values[INDEX] = size % 64; \
		arr_values[UNITS] = (size \ 64) + 1; \
		arr_values[TMP] = array_name[arr_values[UNITS]] & (1 << arr_values[INDEX]);	\
		arr_values[TMP]

#define ba_size(array_name) \
		array_name[0]*8*sizeof(long long)

#endif
