#include<stdio.h>
int main()
{
	int M;
	printf("enter value of M ");
	scanf("%d",&M);
	if((M%3==0)&&(M%5==0))
	{
	printf("Good Number");
	}
	
	if((M%3==0)&&(M%5!=0))
	{
	printf("Bad Number");
	}
	
	if((M%3!=0)&&(M%5==0))
	{
	printf("Poor Number");
	}
	
	if((M%3!=0)&&(M%5!=0))
	{
	printf("-1");
	}
	return 0;
}
