#include <stdio.h>

int main(void)
{
	int a,b,c,d;

	a=2;
	b=3;
	c=6;
	d=1;


	printf("%d\n", a<b);
	printf("%d\n", c<d);
	printf("%d\n", a<b && c<d);
	printf("%d\n", a<b | c<d);
	printf("%d\n", a<!b);

	return 0;
}