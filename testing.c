#include<stdio.h>
#include<stdlib.h>

typedef struct mystruct {
	int x;
	char c;
} mystruct;

int main() {
	int x = 5;
	struct mystruct;

	int *y; // pointer to integer
	

	&x; // int *  pointer to int
	&y; // int ** pointer to pointer to int

	*y; // dereference/value at (int in this case)

	printf("%d\n", *y); // 5

	&y;		// pointer to pointer to int
	*(&y);	// pointer to int
	**(&y); // just an int
	y = &x;

	// pointer arithmetic
	
	char c; // 1 byte

	int a; // 4 bytes

	int *p_a = &a;
	printf("%d\n", p); // assume 0x05
	p++; // + (1 * sizeof(int))
	printf("%d\n", p); // 0x09
	
	{
		int a;
		int **p = &&a;

		print p; // assume 0x05
		p++;
		print p; // 0x0D
	}

	// arrays and pointers
	int x[5] = {0}; // initialize to 0

	// int *
	
	*x; // x[0]
	
	for (int *i = x; i < x + 5; i++) {
		print i;
		// iterate over x
	}

	// structs
	
	struct mystruct s;
	struct mystruct s_arr[10];
	struct mystruct *s_p = NULL;
	s_p = malloc(sizeof(*s_p));
	s.x; // garbage
	s.x = 0;
	s_p->x = 0; // (*s_p).x = 5
	free(s_p);
}
