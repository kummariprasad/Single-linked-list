#include"myheader.h"

SLL *reverse(SLL *ptr)
{
	SLL *curr=NULL,*prev=NULL,*nxt=NULL;

	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}
	else
	{
		nxt=ptr;

		while(nxt!=NULL)
		{
			prev=curr;
			curr=nxt;
			nxt=nxt->link;
			curr->link=prev;
		}

		ptr=curr;
	}

	return ptr;
}
