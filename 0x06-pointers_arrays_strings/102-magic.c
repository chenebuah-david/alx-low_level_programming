#include <stdio.h>

int main(void);
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * I hope all these code is worth it
	 * They said i need 19 lines
	 * Let us hope this works
	 * I have been on this particular task too long
	 * Lord help me
	 * only one statement
	 */
	*(p + 5) = 98;
	/*Hope this is correct*/
	printf("a[2]=%d\n", a[2]);
	return (0);
}
