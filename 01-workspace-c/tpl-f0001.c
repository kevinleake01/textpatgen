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
int numgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
FILE *fp;

char message[5]="X-";  /* Message text */
char separator[5]=" ";  /* Separator text */

int main(int argc, char *argv[])
{
  start=0;  /* Start number */
  finish=255; /* Finish number */
  width=16;  /* Numbers in a line */

  fp=fopen("edit01.txt","w");  /* Open file for writing */
  fprintf(fp,"####################################\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- TEXTPATGEN GENERATED FILE --\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  fprintf(fp,"# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  fprintf(fp,"# Numbers in a line: %ld\n",width);
  fprintf(fp,"#\n");
  fprintf(fp,"####################################\n");
  numgen(start, finish, size);
  fprintf(fp,"# -- End of file.\n");
  fclose(fp);  /* Close file */
}

int numgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      fprintf(fp,"%s", message);
      fprintf(fp,"%04lX", num);  /* Number base format */
      fprintf(fp,"%s", separator);
      num++;
    }
    fprintf(fp,"%s", message);
    fprintf(fp,"%04lX\n", num);  /* Number base format */
  }
}

