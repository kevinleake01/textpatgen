/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-text-nohdr-0001.c 0 20 "The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog"
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);

long int num, start, finish;
char message[1000];

int main(int argc, char *argv[])
{
  start=atol(argv[1]);
  finish=atol(argv[2]);
  strcpy(message, argv[3]);

  for (num=start; num<=finish; num++)
  {
    printf("X%04lX:%s:D%04ld\n", num, message, num);
  }
  return 0;
}

