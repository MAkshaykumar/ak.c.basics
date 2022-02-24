#include<stdio.h>
void main()
{
	int a = 5, b=10;
	int *p1,*q2;
	p1=&a;
	q2=&b;
	printf("%d", *p1+*q2);	
}
