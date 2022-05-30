#include"myheader.h"

SLL *del_first(SLL *ptr)
{
	SLL *temp=NULL;

	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}
	else
	{
		temp=ptr;
		ptr=temp->link;

		free(temp);
		temp=NULL;

		return ptr;
	}
}
