#define NULL 0
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *root=NULL,*first=NULL;
void create(int n)
{
	NODE *p;
	p=(NODE *)malloc(sizeof(NODE));
	p->data=n;
	p->next=NULL;
	if(root==NULL)
	root=p;
	else
	{
		first=root;
		while(first->next!=NULL)
		   first=first->next;
		   first->next=p;
	}
}
 void displayeven (NODE *P)
 {
 	while ( P!=NULL)
 	{
 		if((P->data)%2==0)
 		 printf("%d\t",P->data);
 		P=P->next;
	 }
 }
 void displayodd(NODE *p)
 {
 	while (p!=NULL)
 	{
 		if((p->data)%2!=0)
 		printf("%d\t",p->data);
 		p=p->next;
	 }
 }
  void display(NODE *p)
  {
  	while(p!=NULL)
  	{
  		printf("%d\t",p->data);
  		p=p->next;
	  }
  }
  int main()
  {
  	int ch,n;
  	while(1)
  	{
  		printf("\n 1:create");
  		printf("\n 2: display");
  		printf("\n 3: display Even Numbers");
  		printf("\n 4: display Odd Numbers");
  		printf("\n Enter Ur choice: ");
  		scanf("%d",&ch);
  		switch(ch)
  		{
  			case1:printf("\n Enter an Element: ");
  			      scanf("%d",&n);
  			       create(n);
  			       break;
  			case2:display(root);
  			      break;
  			case3:displayeven(root);
  			      break;
  		    case4:displayodd(root);
  		    break;
		  }
		  getch();
	  }
  }
