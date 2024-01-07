/*
NAME           :NIYASKHAN M
DATE           :/ /2023
DESCDRIPTION   :
INPUT          :
OUTPUT         :
*/


#include "main.h"

int check_op2(char *agrv,Dlist **head2,Dlist **tail2)
{
    int count = 0;

    if(agrv[0] == '-')
    {
	count =1;
    }

    for(int i=count; i< strlen(agrv);i++)
    {
       if( agrv[i] <= '9' && agrv[i] >= '0')
        {
            Dlist *new = malloc (sizeof(Dlist));                       
                if (new == NULL)                                        
                {
                        return FAILURE;
                }
                new -> data = agrv[i] - '0';
		new -> prev = NULL;
                new-> next = NULL;

                if(*head2 == NULL)
                {
                        *head2 = new ;
                        *tail2 = new;
                }
                else
                {
                        (*tail2)->next = new;
                        new -> prev = *tail2;
                        *tail2 = new;
                }
        }
        else
        {
            printf("Error 2");
            return FAILURE;
        } 
    }

    return count;
}
