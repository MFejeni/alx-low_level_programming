#include <stdio.h>
/* Main block, returns 0*/
int main(void)
{
	char c;
	int i;
	long int I;
	long long int Ii;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(I));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(Ii));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return 0;
}
