#include"myheader.h"

SLL *rev_rec(SLL *ptr,SLL *prev)
{
	SLL *temp=NULL;

	if(ptr)
	{
		temp=ptr->link;
		ptr->link=prev;
		prev=rev_rec(temp,ptr);
	}

	return prev;
}
