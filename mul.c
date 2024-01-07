/*
NAME           :NIYASKHAN M
DATE           :/ /2023
DESCDRIPTION   :
INPUT          :
OUTPUT         :
*/


#include "main.h"

int mul(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **head3,Dlist **tail3,Dlist **head4,Dlist **tail4,int c1,int c2,int c3)
{
    int carry =0,digit = 1;
    Dlist *tempt1 = *tail1;
    while(*tail1 != NULL )
    {
	int num1,num2;
	 num1 = (*tail1) -> data;
	 num2 = (*tail2) -> data;


	int num3 = num1 * num2 + carry;
	 if(num3 <= 9)
	 {
	     carry = 0;
	 }
	 else
	 {
	     carry = num3/10;
	     num3 = num3 % 10;
	     
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
    }
    if(carry)
    {
	Dlist *new = malloc(sizeof(Dlist));
        	new -> data = carry;
        	new -> next = *head3;
        	new -> prev = NULL;
        	(*head3)->prev = new;
        	*head3=new;
    }

    *tail2 = (*tail2) -> prev;
    carry =0;
    while(*tail2)
    {
	int num2 = (*tail2) -> data;
	*tail1 = tempt1;
	for(int i=0;i<digit;i++)
	{
		Dlist *new = malloc (sizeof(Dlist));                      
    		if (new == NULL)                                         
    		{
        		return FAILURE;
    		}
     		if(*head4 == NULL)                                      
    		{
        		new -> data = 0;
        		new -> next = *head4;
        		new -> prev = NULL;
        		*head4 = new ;
        		*tail4 = new;
    		}
    		else
    		{
        		new -> data = 0;
        		new -> next = *head4;
        		new -> prev = NULL;
        		(*head4)->prev = new;
        		*head4=new;
    		}
	}	

	    ///////////////////////////////////////////////////////////////////////
	while(*tail1)
	{
	 	int num1;
	 	num1 = (*tail1) -> data;
		int num3 = num1 * num2 + carry;
	 	if(num3 <= 9)
	 	{
	     		carry = 0;
	 	}
	 	else
	 	{
	     		carry = num3/10;
	     		num3 = num3 % 10;
	 	}
	     

		Dlist *new = malloc (sizeof(Dlist));                      
    		if (new == NULL)                                         
    		{
        		return FAILURE;
    		}
     		if(*head4 == NULL)                                      
    		{
        		new -> data = num3;
        		new -> next = *head4;
        		new -> prev = NULL;
        		*head4 = new ;
        		*tail4 = new;
    		}
    		else
    		{
        		new -> data = num3;
        		new -> next = *head4;
        		new -> prev = NULL;
        		(*head4)->prev = new;
        		*head4=new;
    		}	


		if(*tail1 != NULL)
		{
	   		*tail1 = (*tail1)->prev;
		}
    	}
    	if(carry)
    	{
	    while(carry)
	    {
		Dlist *new = malloc(sizeof(Dlist));
		if(carry <= 9)
		{
        		new -> data = carry;
        		new -> next = *head4;
        		new -> prev = NULL;
        		(*head4)->prev = new;
        		*head4=new;
			carry = carry / 10;
		}
		else
		{
        		new -> data = carry % 10;
        		new -> next = *head4;
        		new -> prev = NULL;
        		(*head4)->prev = new;
        		*head4=new;
			carry = carry / 10;
		}
	    }
		    
    	}

	Dlist *temt1 = *head3;
	Dlist *temp1 = *tail3;
	Dlist *temt2 = *head4;
	Dlist *temp2 = *tail4;
	Dlist *temt3 = NULL;
	Dlist *temp3 = NULL;

	add(&temt1,&temp1,&temt2,&temp2,&temt3,&temp3,c1,c2,c3);

	*head3 = temt1;
	*tail3 = temp1;

	*head4 = NULL;
	*tail4 = NULL;
	if(*tail2 != NULL)
	{
   		*tail2 = (*tail2)->prev;
		digit++;
	}
    }

    print((*head1),(*head2),(*head3),c1,c3,c2);
}

    



	

