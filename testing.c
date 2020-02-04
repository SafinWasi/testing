#include<stdio.h>

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

}
