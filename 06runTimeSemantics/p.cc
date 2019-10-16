#include<stdio.h>
int main()
{
	int *p = new int(8);
	delete p;
	
	int m;
	*p = 3;
	printf("%d  ", *p);
	int *u = new int(8);
	*p = 8;
	printf("%p  %p   %p", p, &m, u);
}
