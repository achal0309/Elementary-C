#include<stdio.h>
#include<stdlib.h>
int factorial(int x,int y)
{
	if(y==0)
	return 1;
	else
	return(x*factorial(x,y-1));
}
int main()
{
	int num,k;
	printf("\nENTER THE NUMBER\n");
	scanf("%d",&num);
	k=factorial(num,4);
	printf("\n THE PRODUCT IS::%d\n",k);
	return 0;
}
