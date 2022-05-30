#include"myheader.h"

SLL *sorting(SLL *ptr)
{
	SLL *temp=NULL,*nxt=NULL,*curr=NULL;

	int var;

	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}
	else
	{

		for(temp=ptr;temp->link!=NULL;temp=temp->link)
		{
			for(nxt=temp->link;nxt!=NULL;nxt=nxt->link)
			{
				if(temp->data > nxt->data)
				{
					var=temp->data;
					temp->data=nxt->data;
					nxt->data=var;
				}

			}

			printf("\n");
		}

		return ptr;
	}

}
