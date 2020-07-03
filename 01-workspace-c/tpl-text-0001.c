/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-text-0001.c 0 20 "The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog"
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

  printf("####################################\n");
  printf("#\n");
  printf("# -- TEXTPATGEN GENERATED FILE --\n");
  printf("#\n");
  printf("# -- A generated text file from:\n");
  printf("# -- tpl-text-0001.c\n");
  printf("#\n");
  printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  printf("# Message text: \"%s\"\n",message);
  printf("#\n");
  printf("####################################\n");
  for (num=start; num<=finish; num++)
  {
    printf("X%04lX:%s:D%04ld\n", num, message, num);
  }
  printf("# -- End of file.\n");
  return 0;
}

