/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Users can change the output by editing
# this file directly.
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]);

long int num, start, finish;

int main(int argc, char *argv[])
{
  start=1;  /* Start line */
  finish=25;  /* Finish line */
 
  printf("####################################\n");
  printf("#\n");
  printf("# -- TEXTPATGEN GENERATED FILE --\n");
  printf("#\n");
  printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  printf("#\n");
  printf("####################################\n");
  for (num=start; num<=finish; num++)
  { /* Line of text starts here */
    printf("%02ld: The Quick Brown Fox Jumps ", num);
    printf("Over The Lazy Dog\n");
  } /* Line of text ends here */
  printf("# -- End of file.\n");
  return 0;
}

