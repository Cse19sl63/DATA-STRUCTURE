#include<stdio.h>
#include<malloc.h>
void create();
void view();
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("1 for creat \n 2 for delete \n3 for insert \n 4 for view \n 5 for exit");
		printf("your choice?");
		scanf("%d",&ch);
		if (ch==1)
		{
			create();
		}
		if(ch==4)
		view();
		if(ch==5)
		break;
	}
}
 void create()
 {
 	int n,i;struct node *temp;
 	printf("enter no of nodes to create");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		temp=(struct node*)malloc(sizeof(struct node));
 		printf("enter data");
 		scanf("%d",temp -> data);
 		temp->data=NULL;
 		if(head==NULL)
 		{
 			head=temp;
 			tail=temp;
		 }
		 else
		 {
		 	tail->next=temp;
		 }tail=temp;
		 i=i+1;
 		
	 }
 }
 void view()
 {
 	struct node *tail;
	 tail=head;
	 while (tail!=NULL) 
	 
	 {
	 	printf("%d \t",tail->data);
	 	tail=tail->next;
	 }
 }
 
