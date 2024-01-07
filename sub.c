/*
NAME           :NIYASKHAN M
DATE           :/ /2023
DESCDRIPTION   :
INPUT          :
OUTPUT         :
*/

#include"main.h"

int sub(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **head3,Dlist **tail3,int c1,int c2,int c3)
{
   
        int borrow =0,count1 = 0,count2 = 0,num3;
	Dlist *tem1 = *head1;
	while(tem1)
	{
	    tem1 = (tem1) -> next;
	    count1++;
	}
	Dlist *tem2 = *head2;
	while(tem2)
	{
	    tem2 = (tem2) -> next;
	    count2++;
	}
	tem1 = *head1;
	tem2 = *head2;



	 if(count1 == count2)
        {
                while((tem1 -> data == tem2 -> data) && (tem1 -> next != NULL) && (tem2 -> next != NULL))
                {
                    tem1 = tem1 -> next;
                    tem2 = tem2 -> next;
                }
	
                if(tem1 -> data > tem2 -> data)
                {
                    count2 = 0;
                }
                else
                {
                    count1 = 0;
                }
        }
	    
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
/////////////////////////////////////////////////////////////////////////////////
	if(count1 > count2 )
	{
	    num1=num1 - borrow;
	    if(num1 < num2 )
	    {
		num1 = num1 + 10;
		num3 = num1 - num2 ;
		borrow = 1;
	    }
	    else
	    {
		num3 = num1 - num2;
		borrow = 0;
	    }
	}
	else if(count1 < count2)
	{
	  
	    num2 = num2 - borrow;
	    if(num2 < num1)
	    {
		num2 = num2 + 10;
		num3 = num2 - num1;
		borrow = 1;
	    }
	    else
	    {
		num3 = num2 - num1;
		borrow = 0;
	    }
	}


//////////////////////////////////////////////////////////////////////////////////

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

    if(c2 == 1 || c2 == 2)
	print((*head1),(*head2),(*head3),c1,c3,c2);
    if(c2 == 4)
    {
	*head1 = *head3;
	*tail1 = *tail3;
    }


}

