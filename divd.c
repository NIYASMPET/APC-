/*
NAME           :NIYASKHAN M
DATE           :/ /2023
DESCDRIPTION   :
INPUT          :
OUTPUT         :
*/
#include"main.h"

int divd(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **head3,Dlist **tail3,int c1,int c2,int c3)
{
    int divi=0,count1,count2,x=1,ze1=0;
    while(x)
    {
	 count1=0,count2=0;
	
    	Dlist *tem1 = *head1;
	while(tem1)
	{
	    tem1 = (tem1) -> next;
	    count1++;
	}


	Dlist *ze=*head1;
	ze1=0;
	while(ze -> data == 0 && ze -> next)
	{
	    ze = (ze) -> next;
	    ze1++;
	}

	
	if(count1 == ze1)
	{
	    return divi;
	}
	else
	{
		count1=count1 - ze1;
	}


	Dlist *tem2 = *head2;
	while(tem2)
	{
	    tem2 = (tem2) -> next;
	    count2++;
	}
	tem1 = ze;
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
                else if (tem1 -> data < tem2 -> data)
                {
                    count1 = 0;
                }
        }


	 Dlist *temt1 = *head1;
	 Dlist *temp1 = *tail1;
	 Dlist *temt2 = *head2;
	 Dlist *temp2 = *tail2;
	 Dlist *temt3 = NULL;
	 Dlist *temp3 = NULL;

	 if(count1 >= count2)
	 {
	     sub(&temt1,&temp1,&temt2,&temp2,&temt3,&temp3,c1,c2,c3);
	     divi++;
	 }
	 else if (count1 < count2)
	 {
	     //printf("e-if");
	     x=0;
	 }
	 else
	 {
	     x=0;
	 }

	 *head1 = temt1;
	 *tail1 = temp1;
    
 }
  
    return divi;
}



