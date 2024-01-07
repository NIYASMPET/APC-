/*
NAME           :NIYASKHAN M
DATE           :/ /2023
DESCDRIPTION   :
INPUT          :
OUTPUT         :
*/


#include "main.h"

int check_op1(char *agrv,Dlist **head1,Dlist **tail1)
{

    int count=0;

   if(agrv[0] == '-')
    {
	count = 1;
	agrv++;
    }


    while(*agrv != '\0')
    {
       if( *agrv >= '0' && *agrv <= '9')
        {
            Dlist *new = malloc (sizeof(Dlist));    
	    if (new == NULL)                    
                {
                        return FAILURE;
                }
                new -> data = *agrv - '0';
               new -> prev = NULL;
                new-> next = NULL;

                if(*head1 == NULL)
                {
                        *head1 = new ;
                        *tail1 = new;
			agrv++;
                }
                else
                {
                       // (*tail1)->next = new;
                        new -> prev = *tail1;
			(*tail1)->next = new;
                        *tail1 = new;
			agrv++;
                }
        }
        else
        {
           
            return FAILURE;
        }
    }

    return count;
}

