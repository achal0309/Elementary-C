#include<stdio.h>
int x,flag=0,position=0;
void linear_search(int arr_copy[],int size,int search)
{
	for(x=0;x<size;x++)
 {
	if(arr_copy[x]==search)
   {
	flag=1;
	position=x;
	break;
   }
	else
	flag=0;
 }
    if(flag==1)
    printf("\nTHE ELEMENT IS AT POSITION %d\n",position+1);
    else if(flag==0)
    printf("\nTHE ARRAY DOESN'T CONTAIN THE GIVEN ELEMENT\n");
}
int main()
{
	int arr[100],size,search;
	printf("\nENTER THE SIZE OF ARRAY\n");
	scanf("%d",&size);
	printf("\n ENTER THE ELEMENTS OF ARRAY\n");
	for(x=0;x<size;x++)
	scanf("%d",&arr[x]);
	printf("\nENTER THE ELEMENT TO BE SEARCHED\n");
	scanf("%d",&search);
	linear_search(arr,size,search);
	return 0;
}
