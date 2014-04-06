/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-csv-001.c "0,99,10"
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);
void hexgen(long int start, long int finish, long int size);
void decgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char extinfo[255];

int main(int argc, char *argv[])
{
  strcpy(extinfo, argv[1]);  /* Get the extra information */
  sscanf(extinfo, "%d,%d,%d", &start, &finish, &width );  /* Process this information */

  hexgen(start, finish, size);
  printf("\n");
  decgen(start, finish, size);
  printf("\n");
  return 0;
}

void hexgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      printf("\"X%04lX\",", num);
      num++;
    }
    printf("\"X%04lX\"\n", num);
  }
}

void decgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      printf("\"D%04ld\",", num);
      num++;
    }
    printf("\"D%04ld\"\n", num);
  }
}

