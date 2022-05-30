#include"myheader.h"

int  no_of_nodes(SLL *ptr,int *cnt)
{

	int n;

	*cnt=0;

	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}

	else
	{

		while(ptr!=NULL)
		{
			(*cnt)++;
			ptr=ptr->link;
		}

	}
	
	n=*cnt;

	return n; 
}
