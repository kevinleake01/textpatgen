/*
####################################
#
# --- TEXTPATGEN TEMPLATE ---
#
# Users can change the output by editing
# this file directly.
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);
void numgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char message[5]="D-";  /* Message text */
char separator[5]=" ";  /* Separator text */

int main(int argc, char *argv[])
{
  start=0;  /* Start number */
  finish=99; /* Finish number */
  width=10;  /* Numbers in a line */

  printf("####################################\n");
  printf("#\n");
  printf("# -- TEXTPATGEN GENERATED FILE --\n");
  printf("#\n");
  printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  printf("# Numbers in a line: %ld\n",width);
  printf("#\n");
  printf("####################################\n");
  numgen(start, finish, size);
  printf("# -- End of file.\n");
  return 0;
}

void numgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      printf("%s", message);
      printf("%04ld", num);  /* Number base format */
      printf("%s", separator);
      num++;
    }
    printf("%s", message);
    printf("%04ld\n", num);  /* Number base format */
  }
}

