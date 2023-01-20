#include<iostream>
using namespace std;


struct node
{
int data;
struct node*next;	
};

struct node*create(struct node*head,int size)
{
	int i,value;
	struct node*temp;
	for(i=0;i<size;i++)
	{
		if(i==0)
		{
			scanf("%d",value);
			head->data=value;
			if(size==1)
			{
				head->next=NULL;
				
			
			}
			head->data;
		}
		else{
		scanf("%d",value);
			struct node*newnode=(struct node*)malloc(sizeof(struct node));
			temp->next=newnode;
			newnode->data=value;
		}
		
	}
	return head;
}

void print(struct node)
{
	while(head!=NULL)
	{
		printf("%d",head->data);
		head=head->next;
	}
}
int main()
{
	struct node*head=(struct node*)malloc(sizeof(struct node));
	head=create(head,30);
	print(head);
}
