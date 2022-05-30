#include"myheader.h"

SLL *del_last(SLL *ptr)
{
	SLL *temp=NULL,*prev=NULL;

	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}
	else
	{
		temp=ptr;
		while(temp->link!=NULL)
		{
			prev=temp;
			temp=temp->link;
		}

		prev->link=NULL;

		free(temp);
		temp=NULL;

		return ptr;
	}
}
