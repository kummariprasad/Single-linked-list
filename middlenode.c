#include"myheader.h"

void middle_node(SLL *ptr)
{
	SLL *temp=NULL;

	int cnt=0;

	temp=ptr;

	while(ptr->link!=NULL)
	{
		cnt++;

		if(cnt&1)
			temp=temp->link;

		ptr=ptr->link;
	}

	printf("\nMiddle node of SLL %d \n",temp->data);
}
