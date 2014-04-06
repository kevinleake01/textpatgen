/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-hexgen-004.c 0 255 16
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);
void hexgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char message[5]="";  /* Message text */
char separator[5]="";  /* Separator text */

int main(int argc, char *argv[])
{
  start=atol(argv[1]);
  finish=atol(argv[2]);
  width=atol(argv[3]);

  printf("####################################\n");
  printf("#\n");
  printf("# -- TEXTPATGEN GENERATED FILE --\n");
  printf("#\n");
  printf("# -- A generated text file created from:\n");
  printf("# -- tpl-hexgen-004.c\n");
  printf("#\n");
  printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  printf("# Numbers in a line: %ld\n",width);
  printf("#\n");
  printf("####################################\n");
  hexgen(start, finish, size);
  printf("# -- End of file.\n");
  return 0;
}

void hexgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      printf("%s", message);
      printf("%02lX", num);
      printf("%s", separator);
      num++;
    }
    printf("%s", message);
    printf("%02lX\n", num);
  }
}

