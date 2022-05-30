#include"myheader.h"

void middle_pointer(SLL *ptr)
{
	SLL *sptr=NULL,*fptr=NULL;

	sptr=ptr;
	fptr=ptr;

	while(fptr!=NULL && fptr->link!=NULL)
	{
		sptr=sptr->link;
		fptr=fptr->link->link;
	}

	printf("\nPointer:Middle node of SLL %d \n",sptr->data);
}
