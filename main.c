/*
NAME           :NIYASKHAN M
DATE           :/ /2023
DESCDRIPTION   :
INPUT          :
OUTPUT         :
*/


#include "main.h"

int main(int agrc,char *agrv[])
{

    Dlist *head1 = NULL;
    Dlist *tail1 = NULL;
    Dlist *head2 = NULL;
    Dlist *tail2 = NULL;
    Dlist *head3 = NULL;
    Dlist *tail3 = NULL;
    Dlist *head4 = NULL;
    Dlist *tail4 = NULL;
    int c1,c2,c3,result =9;
    if(agrc == 4)
    {
	c1 = check_op1(agrv[1],&head1,&tail1);
	c3 = check_op2(agrv[3],&head2,&tail2);
	c2 = check_opr(agrv[2]);
    }
    else
    {
       printf("error\n");
    }

   // printf("%d %d %d ",c1,c2,c3);

    if(c1 == FAILURE || c3 == FAILURE)
    {
	printf("error");
	return 0;
    }

    switch(c2)
    {
	case 1:
	    {
		if(c1 == c3)
		{
		    add(&head1,&tail1,&head2,&tail2,&head3,&tail3,c1,c2,c3);
		}
		else
		{
		    sub(&head1,&tail1,&head2,&tail2,&head3,&tail3,c1,c2,c3);
		}
		break;
	    }
	case 2:
	    {
		if(c1 == c3)
		{
		    sub(&head1,&tail1,&head2,&tail2,&head3,&tail3,c1,c2,c3);
		}
		else
		{
		    add(&head1,&tail1,&head2,&tail2,&head3,&tail3,c1,c2,c3);
		}
		break;
	    }
	case 3:
	    {
		if(c1 != c3)
		{
		    printf("-");
		}
		mul(&head1,&tail1,&head2,&tail2,&head3,&tail3,&head4,&tail4,c1,c2,c3);
		break;
	    }
	case 4:
	    {
		if(c1 != c3)
		{
		    printf("-");
		}
		result = divd(&head1,&tail1,&head2,&tail2,&head3,&tail3,c1,c2,c3);
		printf("%d",result);
		break;
	    }
	default:
	    {
		printf("enter the crt operator");
	    }
    }



}


