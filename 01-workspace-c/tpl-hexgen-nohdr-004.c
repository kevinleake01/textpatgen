/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-hexgen-nohdr-004.c 0 255 16
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);
int hexgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char message[5]="";  /* Message text */
char separator[5]="";  /* Separator text */

int main(int argc, char *argv[])
{
  start=atol(argv[1]);
  finish=atol(argv[2]);
  width=atol(argv[3]);

  hexgen(start, finish, size);

}

int hexgen(long int start, long int finish, long int size)
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

