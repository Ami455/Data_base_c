#include <stdio.h>
#include <stdlib.h>
#include "data_base.h"
extern int i;
int idd;
customer array[n];
int main()
{
int s,d;
double m;
   unsigned short operation;
   while (1)
   {
       printf("hello choose an operation\n1:Add customer\n\
2:Edit data\n3:Print data\n4:Transfer money\n5:Delete customer\n\n");
       fflush(stdin);
       scanf("%hu",&operation);
       switch (operation)
       {
       case 1:

           if(i<=n)
           {
               enter_data();
               i++;
           }
           else{
            printf("can't add more customers\n");
           }
        break;
         case 2:

            edit_data();
        break;
         case 3:

            print_data();
        break;
         case 4:

             printf("please enter source and destination and amount of money\n");
             fflush(stdin);
             scanf("%i %i %lf",&s,&d,&m);
             transfer(s,d,m);
        break;
         case 5:

             printf("enter ID\n");
             fflush(stdin);
             scanf("%i",&idd);
             delete_cus(idd);
             i--;
        break;
       }
        puts("\n\n");
   }


    return 0;
}

