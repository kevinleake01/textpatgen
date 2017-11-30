/*
####################################
#
# --- TEXTPATGEN TEMPLATE ---
#
# Example usage:
# tpl-octgen-file-0001.c 0 255 8
#
# The text is written to a timestamped file.
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]);
void numgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32];
struct tm* tm_info;

char message[5]="O-";  /* Message text */
char separator[5]=" ";  /* Separator text */

int main(int argc, char *argv[])
{
  start=atol(argv[1]);
  finish=atol(argv[2]);
  width=atol(argv[3]);

  time(&timer);  /* get the time */
  tm_info=localtime(&timer);

  strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* Timestamp to print */
  strftime(buffer2, 32, "00_%Y%m%d_%H%M%S.txt", tm_info); /* Timestamp for filename */

  fp=fopen(buffer2,"w");  /* Open file for writing */
  fprintf(fp,"####################################\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- TEXTPATGEN GENERATED FILE --\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- tpl-octgen-file-0001.c --\n", buffer1);
  fprintf(fp,"#\n");
  fprintf(fp,"# -- %s --\n", buffer1);
  fprintf(fp,"#\n");
  fprintf(fp,"# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  fprintf(fp,"# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  fprintf(fp,"# Numbers in a line: %ld\n",width);
  fprintf(fp,"#\n");
  fprintf(fp,"####################################\n");
  numgen(start, finish, size);
  fprintf(fp,"# -- End of file.\n");
  fclose(fp);  /* Close file */
  return 0;
}

void numgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      fprintf(fp,"%s", message);
      fprintf(fp,"%05lo", num);  /* Number base format */
      fprintf(fp,"%s", separator);
      num++;
    }
    fprintf(fp,"%s", message);
    fprintf(fp,"%05lo\n", num);  /* Number base format */
  }
}

