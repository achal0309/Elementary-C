#include<stdio.h>
#include<stdlib.h>
float num1,num2,result;
int choice,repeat;
void input()
{
	printf("\n\t\t\t\t\t\tELEMENTARY CALCULATOR\n\n\n");
	printf("\n1.ADDITION\n");
	printf("\n2.SUBTRACTION\n");
	printf("\n3.MULTIPLICATION\n");
	printf("\n4.DIVISION\n");
	printf("\n5.EXIT\n\n");
	printf("\nENTER YOUR CHOICE\n");
	scanf("%d",&choice);
	printf("\nENTER THE FIRST NUMBER\n");
	scanf("%f",&num1);
	printf("\nENTER THE SECOND NUMBER\n");
	scanf("%f",&num2);
}
void add()
{
	result=num1+num2;
	printf("\nTHE RESULT IS %f\n",result);
}
void diff()
{
	result=num1-num2;
	printf("\nTHE RESULT IS %f\n",result);
}
void pro()
{
	result=num1*num2;
	printf("\nTHE RESULT IS %f\n",result);
}
void quo()
{
	result=num1/num2;
	printf("\nTHE RESULT IS %f\n",result);
}
int main()
{
	while(1)
{
	input(); 
	switch(choice)
	{
		case 1:
			    add();
			    break;
		case 2:
			    diff();
			    break;
		case 3:
			    pro();
			    break;
		case 4:
			    quo();
			    break;
		case 5: 
		        exit(0);
			    break;
		default:
			    printf("\nWRONG CHOICE\n");
    }
     printf("\nFOR END OF PROCESS ENTER 1\n");
	 scanf("%d",&repeat);  
     if(repeat==1)
     break;
}
	 return 0;				    	
	}	
