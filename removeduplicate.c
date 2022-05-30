#include"myheader.h"


SLL *removeduplicates(SLL *ptr)
{
  
  SLL *temp=NULL,*nxt=NULL,*del=NULL;
  
  temp=ptr;
  
  for(;temp->link!=NULL;temp=temp->link) 
  {
    for(nxt=temp->link;nxt!=NULL;nxt=nxt->link)
    {
      if(temp->data == nxt->data)
      {
        del=nxt;
        temp->link=nxt->link;
        free(del);
        del=NULL;
      }
    }
  } 
  
  return ptr;
}

