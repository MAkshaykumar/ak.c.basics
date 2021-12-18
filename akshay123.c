#include<stdio.h>
void main()
{
	int a,b,area,perimeter;
	printf("enter a number");
    scanf("%d%d", &a,&b);
    area=a*b;
    perimeter=2*(a+b);
    printf("area of rectangle with %d and %d is %d\n", a,b,area);
    printf("perimeter of rectangle with %d and %d is %d",a,b,perimeter);
}
