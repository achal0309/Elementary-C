#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	
};
struct node *start=NULL;
void insertatbegin(int x)
{
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	t->data=x;
	if(start==NULL)
	{
		start=t;
		t->next=NULL;
	}
	else
	t->next=start;
	start=t;
}
void insertatlast(int x)
{
	struct node *p,*t;
	t=(struct node *)malloc((sizeof(struct node)));
	t->data=x;
	t->next=NULL;
	if(start=NULL)
	{
		start=t;
	}
	else
	p=start;
	while(p->next!=NULL)
	p=p->next;
	p->next=t;
}
void traverse()
{
	struct node *p;
	p=start;
	while(p->next!=NULL)
	{
		printf("\n%d\n",p->data);
		p=p->next;
	}
	printf("\n%d\n",p->data);
}
void deletefrombegin()
{
	if(start=NULL)
	printf("\nTHE LINKED LIST IS EMPTY\n");
	else
	{
	printf("\nTHE DELETED ELEMENT IS %d\n",start->data);
	start=start->next;
    }
}
void deletefromend()
{
	struct node *p,*loc;
	if(start=NULL)
	printf("\nLINKED LIST IS EMPTY\n");
	else if(start->next=NULL)
	start=NULL;
	else
	{
		p=start;
		while(p->next!=NULL)
		{
			loc=p;
			p=p->next;
		}
		printf("\nTHE DELETED ELEMENT WOULD BE %d\n",p->data);
		loc->next=NULL;
	}
}
int main()
{
	int num,ins,jns,choice;
	while(1)
	{
	printf("\n1.INSERT AT BEGINNING\n");
	printf("\n2.INSERT AT LAST\n");
	printf("\n3.TRAVERSE\n");
	printf("\n4.DELETE FROM BEGIN\n");
	printf("\n5.DELETE FROM END\n");
	printf("\nENTER YOUR CHOICE\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			    printf("\nENTER THE ELEMENT TO BE INSERTED\n");
			    scanf("%d",&ins);
			    insertatbegin(ins);
			    break;
		case 2:
		        printf("\nENTER THE ELEMENT TO BE INSERTED\n");
			    scanf("%d",&jns);
			    insertatlast(jns);
			    break;
		case 3:
		        traverse();
				break;
		case 4:
		        deletefrombegin();
				break;
		case 5:
		        deletefromend();
				break;							    
	}
	printf("\nENTER 2 TO BREAK OUT\n");
	scanf("%d",&choice);
	if(choice==2)
	break;
    }
	return 0;
}
