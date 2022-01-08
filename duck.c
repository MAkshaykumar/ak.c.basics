#include<stdio.h>
void main()
{
	int n,r,is_duck;
	printf("enter a number");
	scanf("%d", &n);
	while(n<0)
	
{
		r=n%10;
		if(n==0)
	{
	is_duck==1;
	break;
       }
       n=n/10;
    }
    if(is_duck == 1)
    {
 	printf("duck");
    }
	else
	{
		printf("not a duck number");
	}
  
  }

