#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data_base.h"
extern customer array[n];

int i=1;
void enter_data(void)
{
    printf("enter customer %i name\n",i);
    fflush(stdin);
    gets(array[i].name);
    printf("enter customer %i ID\n",i);
    fflush(stdin);
    scanf("%i",&array[i].id);
    printf("enter acount %i type\n",i);
    fflush(stdin);
    gets(array[i].type);
    printf("enter customer %i cash\n",i);
    fflush(stdin);
    scanf("%lf",&array[i].cash);
}

void edit_data(void)
{   int j,trial=1,x;
    tries: printf("enter ID\n");
    fflush(stdin);
    scanf("%i",&j);
    for(x=0;x<n;x++)
    {
        if (array[x].id==j)
        {
            break;
        }
    }
    if(x==n){
        if(trial==trials)
        {
            printf("false ID, no trial\n");
            goto end;
        }
        printf("false ID, please try again\n");
        trial++;
        goto tries;
    }
    printf("enter customer %i name\n",x);
    fflush(stdin);
    gets(array[x].name);
    printf("enter customer %i ID\n",x);
    fflush(stdin);
    scanf("%i",&array[x].id);
    printf("enter acount %i type\n",x);
    fflush(stdin);
    gets(array[x].type);
    printf("enter customer %i cash\n",x);
    fflush(stdin);
    scanf("%lf",&array[x].cash);
   end:
       return;
}

void print_data(void)
{   int j,trial=1,x;
    tries: printf("enter ID\n");
    fflush(stdin);
    scanf("%i",&j);

    for(x=0;x<n;x++)
    {
        if (array[x].id==j)
        {
            break;
        }
    }
    if(x==n){
        if(trial==trials)
        {
            printf("false ID, no trial\n");
            goto end;
        }
        printf("false ID, please try again\n");
        goto tries;
    }
    printf("customer name is: ");
    puts(array[x].name);
    printf("customer ID is: ");
    printf("%i\n",array[x].id);
    printf("acount type is: ");
    puts(array[x].type);
    printf("customer cash is: %0.2lf\n",array[x].cash);

   end: return;
}

void transfer(int source_id,int destination_id,double amount)
{ int sou=-1,de=-1,x;
      for(x=0;x<n;x++)
    {
        if (array[x].id==source_id)
        {
           sou=x;
        }
        if (array[x].id==destination_id)
        {
           de=x;
        }
        if (sou!=-1&&de!=-1)
        {
            break;
        }
    }
    if (amount >array[sou].cash)
    {
        printf("can't transfer this amount\n");
        goto end;
    }
    array[de].cash+=amount;
    array[sou].cash-=amount;
    end: return;
}

void delete_cus(int Id)
{ int x;
    for(x=0;x<n;x++)
    {
        if (array[x].id==Id)
        {
            break;
        }
    }
    for (int y=x;y<i;y++)
    {
        strcpy(array[y].name,array[y+1].name);
        strcpy(array[y].type,array[y+1].type);
        array[y].id=array[y+1].id;
        array[y].cash=array[y+1].cash;
    }
    strcpy(array[i].name,"\0");
    strcpy(array[i].type,"\0");
    array[i].id=0;
    array[i].cash=0;
}
//enter more than three cust
