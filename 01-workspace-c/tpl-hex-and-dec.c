/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-hex-and-dec.c "0,99,10"
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);
void hexgen_dash(long int start, long int finish, long int size);
void decgen_dash(long int start, long int finish, long int size);
void hexgen_nodash(long int start, long int finish, long int size);
void decgen_nodash(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char extinfo[1000];

int main(int argc, char *argv[])
{
  strcpy(extinfo, argv[1]);  /* Get the extra information */
  sscanf(extinfo, "%ld,%ld,%ld", &start, &finish, &width );  /* Process this information */

  printf("####################################\n");
  printf("#\n");
  printf("# -- TEXTPATGEN GENERATED FILE\n");
  printf("#\n");
  printf("# -- A generated text file from\n");
  printf("# -- tpl-hex-and-dec.c\n");
  printf("#\n");
  printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  printf("# Numbers in a line: %ld\n",width);
  printf("#\n");
  printf("####################################\n");
  hexgen_dash(start, finish, size);
  printf("####################################\n");
  decgen_dash(start, finish, size);
  printf("####################################\n");
  hexgen_nodash(start, finish, size);
  printf("####################################\n");
  decgen_nodash(start, finish, size);
  printf("# -- End of file.\n");
  return 0;
}

void hexgen_dash(long int start, long int finish, long int size)
{
  prvoidf("# -- Generated Hex numbers with dashes.\n");
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      printf("X%04lX-", num);
      num++;
    }
    printf("X%04lX\n", num);
  }
}

void decgen_dash(long int start, long int finish, long int size)
{
  printf("# -- Generated Decimal numbers with dashes.\n");
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      printf("D%04ld-", num);
      num++;
    }
    printf("D%04ld\n", num);
  }
}

void hexgen_nodash(long int start, long int finish, long int size)
{
  printf("# -- Generated Hex numbers without dashes.\n");
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      printf("X%04lX ", num);
      num++;
    }
    printf("X%04lX\n", num);
  }
}

void decgen_nodash(long int start, long int finish, long int size)
{
  printf("# -- Generated Decimal numbers without dashes.\n");
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      printf("D%04ld ", num);
      num++;
    }
    printf("D%04ld\n", num);
  }
}

