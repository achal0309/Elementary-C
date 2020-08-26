#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice,num1,num2,result,repeat;
	printf("\n\t\t\t\t\t\tELEMENTARY CALCULATOR\n\n\n");
	while(1)
{
	printf("\n1.ADDITION\n");
	printf("\n2.SUBTRACTION\n");
	printf("\n3.MULTIPLICATION\n");
	printf("\n4.DIVISION\n");
	printf("\n5.EXIT\n\n");
	printf("\nENTER YOUR CHOICE\n");
	scanf("%d",&choice);
	printf("\nENTER THE FIRST NUMBER\n");
	scanf("%d",&num1);
	printf("\nENTER THE SECOND NUMBER\n");
	scanf("%d",&num2);
	switch(choice)
	{
		case 1:
			    result=num1+num2;
			    printf("\nTHE RESULT IS %d\n",result);
			    break;
		case 2:
			    result=num1-num2;
			    printf("\nTHE RESULT IS %d\n",result);
			    break;
		case 3:
			    result=num1*num2;
			    printf("\nTHE RESULT IS %d\n",result);
			    break;
		case 4:
			    result=num1/num2;
			    printf("\nTHE RESULT IS %d\n",result);
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
