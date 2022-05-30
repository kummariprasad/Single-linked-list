#include"myheader.h"

SLL *del_data(SLL *ptr,int data)
{
	SLL *temp=NULL,*prev=NULL;

	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}

	if(data==ptr->data)
	{
		temp=ptr;
		ptr=ptr->link;
		free(temp);
		temp=NULL;
		return ptr;
	}
	else
	{
		temp=ptr;
		while(temp!=NULL && temp->data!=data)
		{	
			prev=temp;
			temp=temp->link;
		}

		prev->link=temp->link;

		free(temp);

		temp=NULL;

		return ptr;

	}
}
