#include"myheader.h"

SLL *insert_data(SLL *ptr,int pos)
{
	SLL *temp=NULL,*prev=NULL,*new=NULL;

	int cnt=1;

	new=calloc(1,sizeof(SLL));

	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}

	printf("Enter the inserted data:");
	scanf("%d",&new->data);

	if(cnt==pos)
	{
		temp=ptr;
		new->link=temp;
		ptr=new;
		return ptr;
	}
	else
	{
		temp=ptr;
		while(temp!=NULL)
		{
			cnt++;

			if(cnt==pos)
			{	
				prev=temp->link;
				temp->link=new;
				new->link=prev;
			}

			temp=temp->link;
		}

		return ptr;

	}
}
