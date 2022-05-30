#include"myheader.h"

SLL *del_node_pos(SLL *ptr,int pos)
{
	SLL *temp=NULL,*prev=NULL;

	int cnt=1;

	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}


	if(cnt==pos)
	{
		temp=ptr;
		ptr=ptr->link;
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
				temp->link=prev->link;
				free(prev);
				prev=NULL;
				break;	
			}

			temp=temp->link;
		}

		return ptr;

	}
}
