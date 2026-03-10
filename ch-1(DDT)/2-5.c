/*
#include<stdio.h>

int main()
{
	int a = 1234;
	printf("[%d]\n", a);
	printf("[%8d]\n", a);
	printf("[%8-d]\n", a);
	printf("[%08d]\n", a);
	printf("[%+08d]\n", a);

	char b = 'A';
	double c = 3.14159;

	printf("[%c]\n", b);
	printf("[%8c]\n", b);
	printf("[%-8c]\n", b);
	printf("[%f]\n", b);
	printf("[%c8.3f]\n", b);
	printf("[%c+8.3f]\n", b);
	printf("[%08.3f]\n", b);
	printf("[%+08.3fc]\n", b);

}*/



#include <stdio.h>
int main(void)
{

	int h = 1234;

	printf( "%-10d", h);

	return 0;

}

