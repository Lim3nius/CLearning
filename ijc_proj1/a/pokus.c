#include <stdlib.h>
#include <stdio.h>
#define max(a,b) ((a > b) ? (a) : (b))

#define init_var_with_type(name, type) \
		type name=NULL
#define init_int_arr(name, size) \
		int name[size];

#define init_var_with_type2(name) \
		int name=0
#define char_fmt \
		"%s -> |%c|\n"
#define str_fmt \
		"%s -> |%s|\n"
#define int_fmt \
		"%s -> |%d|\n"

#define debug_print(name, var, fmt) \
		printf(fmt, name, var)

enum Vycet { MAX_VEL=1000, MIN_VEL=10 };

int main(){
	init_var_with_type2(aa);
	aa=42;
	debug_print("aa", aa, int_fmt);
	enum Vycet c = MAX_VEL;
	int x= 10, xx=100, res=0;
	res=max(x,xx);
	printf("Whatever res = |%d|\n", res);
	printf("C -> |%d|\n", c);
	//
//	int pole[1000]= {1,2,3,4,5,6,7,8,9,1000};
	init_int_arr(pole, 500);
	pole[0] = -1;
}
