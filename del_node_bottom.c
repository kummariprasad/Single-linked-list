#include"myheader.h"

SLL *del_node_bottom(SLL *ptr,int index)
{
	SLL *temp=NULL,*prev=NULL,*temp1=NULL,*curr=NULL;

	temp1=ptr;

	int cnt;

	cnt=no_of_nodes(temp1,&cnt);

	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}

	if(index==cnt)
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
		while(temp!=NULL)
		{
			if(index==cnt)
			{
                            prev->link=temp->link;
			    free(temp);
			    temp=NULL;
			    break;
			}
			cnt--;
			prev=temp;
			temp=temp->link;
		}

		return ptr;
	}
}
