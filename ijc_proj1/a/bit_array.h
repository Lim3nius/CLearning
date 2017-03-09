#ifndef BIT_ARRAY_H
#define BIT_ARRAY_H

#define HODNOTA 100
enum vycet{VELIKOST_POLE_BASIC = 100};
enum arr_indexes{UNITS, INDEX,TMP, TMP2};
typedef unsigned long* bit_array_t;

#define ba_create(array_name, size) \
		unsigned long array_name[HODNOTA]; \
		array_name[0]=size

#define ba_set_bit(array_name, size, value)

#define ba_get_bit(array_name, size) \
		arr_idx = 1+size\63	

#define ba_size(array_name) \
		array_name[0]*8*sizeof(long long)

#endif
