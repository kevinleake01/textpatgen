/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-chksum-0001.c 255 16 "+"
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);

long int num, finish;
long int width, size;
char message[1000];

int main(int argc, char *argv[])
{
  finish=atol(argv[1]);
  width=atol(argv[2]);
  strcpy(message, argv[3]);

  printf("####################################\n");
  printf("#\n");
  printf("# -- TEXTPATGEN GENERATED FILE --\n");
  printf("#\n");
  printf("# -- A generated text file created from:\n");
  printf("# -- tpl-chksum-0001.c\n");
  printf("#\n");
  printf("# -- This file can be very useful in\n");
  printf("# -- transmission tests.\n");
  printf("#\n");
  printf("# Total number: %ld\n",finish);
  printf("# Number in a line: %ld\n",width);
  printf("# Text: \"%s\"\n",message);
  printf("#\n");
  printf("####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      printf("%s", message);
      num++;
    }
    printf("%s\n", message);
  }
  return 0;
}

