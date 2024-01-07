/*
NAME           :NIYASKHAN M
DATE           :/ /2023
DESCDRIPTION   :
INPUT          :
OUTPUT         :
*/
#include"main.h"


int check_opr(char *agrv)
{
    char *opr = malloc(sizeof(agrv[2]));
    opr = agrv;

    if(opr[0] != '+' && opr[0] != '-' && opr[0] != 'x' && opr[0] != '/')
    {
       return FAILURE;
    }
    else
    {
       if(opr[0] == '+')
       {
           return 1;
       }
       else if (opr[0] == '-')
       {
           return 2;
       }
       else if(opr[0] == 'x')
       {
           return 3;
       }
       else
       {
           return 4;
       }
    }
}



