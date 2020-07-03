/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# editpatgen tpl-csv-0003.c "0,99,10"
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);
void decgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char extinfo[255];

int main(int argc, char *argv[])
{
  strcpy(extinfo, argv[1]);  /* Get the extra information */
  sscanf(extinfo, "%d,%d,%d", &start, &finish, &width );  /* Process this information */

  decgen(start, finish, size);
  return 0;
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

