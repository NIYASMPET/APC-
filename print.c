/*
NAME           :NIYASKHAN M
DATE           :/ /2023
DESCDRIPTION   :
INPUT          :
OUTPUT         :
*/
#include "main.h"

void print(Dlist *head1,Dlist *head2,Dlist *head3,int c1,int c3,int c2)
{
	int co1=0,co2=0;
	Dlist *tem1 = head1;
	Dlist *tem2 = head2;
	while(tem1)
	{
	    co1++;
	    tem1 = tem1 -> next;
	    
	}
//	printf("%d",co1);
	while(tem2)
	{
	    tem2 = tem2 -> next;
	    co2++;
	}
//	printf("\n%d\n",co2);
	if(co1 == co2)
	{
		while((head1 -> data == head2 -> data) && (head1 -> next != NULL) && (head2 -> next != NULL))
		{
		    head1 = head1 -> next;
		    head2 = head2 -> next;
		}
		if(head1 -> data > head2 -> data)
		{
		    co2 = 0;
		}
		else
		{
		    co1 = 0;
		}
	}

    if(c2 == 1)
    {

    	if(c1==1 && c3==1 )
    	{
		printf("-");
    	}
	else if(c1 == 1 || c3 == 1)
	{
	    if(co1 > co2 )
	    {
		if(c1 == 1)
		{
		    printf("-");
		}
	    }
	    else if (co1 < co2 )
	    {
		if(c3 == 1)
		{
		    printf("-");
		}
	    }

	}
    }
    if(c2 == 2)
    {

	if(c1 == c3)
	{
	    if(co1 > co2 || co1 == -1)
	    {
		if(c1 == 1)
		{
		    printf("-");
		}
	    }
	    else if (co1 < co2 || co2 == -1)
	    {
		if(c3 == 0)
		{
		    printf("-");
		}
	    }
	}
	else
	{
	    if(co1 > co2 || co1 == -1)
	    {
		if(c1 == 1)
		{
		    printf("-");
		}
	    }
	}

    }
	//////////////

	    while (head3)
	    {
		   
		    printf("%d", head3 -> data);
		    head3 = head3 -> next;

	    }
	    printf("\n");
    
}
