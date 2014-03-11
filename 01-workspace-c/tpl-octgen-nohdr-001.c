/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-octgen-nohdr-001.c 0 255 8
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);
int octgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char message[5]="O-";  /* Message text */
char separator[5]=" ";  /* Separator text */

int main(int argc, char *argv[])
{
  start=atol(argv[1]);
  finish=atol(argv[2]);
  width=atol(argv[3]);

  octgen(start, finish, size);

}

int octgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      printf("%s", message);
      printf("%05lo", num);
      printf("%s", separator);
      num++;
    }
    printf("%s", message);
    printf("%05lo\n", num);
  }
}

