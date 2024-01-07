#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SUCCESS -2
#define FAILURE -1

typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
}Dlist;


int check_op1(char *agrv,Dlist **head1,Dlist **tail1);
int check_op2(char *agrv,Dlist **head2,Dlist **tail2);
int check_opr(char *agrv);

int add(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **head3,Dlist **tail3,int c1,int c2,int c3);
int sub(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **head3,Dlist **tail3,int c1,int c2,int c3);
int mul(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **head3,Dlist **tail3,Dlist **head4,Dlist **tail4,int c1,int c2,int c3);
int divd(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **head3,Dlist **tail3,int c1,int c2,int c3);
void print(Dlist *head1,Dlist *head2,Dlist *head3,int c1,int c3,int c2);
