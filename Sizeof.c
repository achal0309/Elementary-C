#include<stdio.h>
int main()
{
	int num = 5;
	int count1=12,count2;
	int i = 5,j = 10, k= 15;
	char ch ='A';
	int hold = printf("THE SIZEOF OPERATOR\n");
	float temp = 34.6f;
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(num));
	printf("%d\n",sizeof(ch));
	printf("%d\n",sizeof(temp));
	printf("%d\n",sizeof('A'));
	printf("%d",sizeof(4.5f));
	printf("%d\n",sizeof(4.5));
	printf("%d\n",sizeof(k/=i+j));
	printf("%d\n",k);
	printf("%d\n",k/=i+j);
	printf("%d\n",hold);
	count2 = sizeof(count1++);
	printf("%d",count2);
	printf("%d",count1);
	return 0;
}
