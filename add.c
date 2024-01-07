/*
NAME           :NIYASKHAN M
DATE           :/ /2023
DESCDRIPTION   :
INPUT          :
OUTPUT         :
*/


#include"main.h"

int add(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **head3,Dlist **tail3,int c1,int c2,int c3)
{
	int carry =0;
    while(*tail1 != NULL || *tail2 != NULL)
    {
	int num1,num2;

	if(*tail1 == NULL)
	{
	   num1 = 0;
	}
	else
	{

	 num1 = (*tail1) -> data;
	}
	if(*tail2 == NULL)
	{
	    num2 = 0;
	}
	else
	{
	 num2 = (*tail2) -> data;
	}

	int num3 = num1 + num2 + carry;
	 if(num3 <= 9)
	 {
	     carry = 0;
	 }
	 else
	 {
	     num3 = num3 % 10;
	     carry = 1;
	 }
	     

	Dlist *new = malloc (sizeof(Dlist));                      
    	if (new == NULL)                                         
    	{
        	return FAILURE;
    	}
     	if(*head3 == NULL)                                      
    	{
        	new -> data = num3;
        	new -> next = *head3;
        	new -> prev = NULL;
        	*head3 = new ;
        	*tail3 = new;
    	}
    	else
    	{
        	new -> data = num3;
        	new -> next = *head3;
        	new -> prev = NULL;
        	(*head3)->prev = new;
        	*head3=new;
    	}


	if(*tail1 != NULL)
	{
	   *tail1 = (*tail1)->prev;
	}
	if(*tail2 != NULL)
	{
	    *tail2 = (*tail2)->prev;
	}

    }
    if(carry)
    {
	Dlist *new = malloc(sizeof(Dlist));
        	new -> data = 1;
        	new -> next = *head3;
        	new -> prev = NULL;
        	(*head3)->prev = new;
        	*head3=new;
    }


//	printf("%p",*head1);
    if(c2 == 1 || c2 == 2)
	print((*head1),(*head2),(*head3),c1,c3,c2);
    if(c2 == 3)
    {
	*head1 = *head3;
	*tail1 = *tail3;
    }

}
