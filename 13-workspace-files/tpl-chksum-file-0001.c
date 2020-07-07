/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-chksum-file-0001.c 255 16 "+"
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

long int num, finish;
long int width, size;
char message[1000];
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32], buffer3[32];
struct tm* tm_info;

int main(int argc, char *argv[])
{
  finish=atol(argv[1]);
  width=atol(argv[2]);
  strcpy(message, argv[3]);

  time(&timer);  /* get the time */
  tm_info=localtime(&timer);

  strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* ISO-8601 Timestamp */
  strftime(buffer2, 32, "%s", tm_info); /* Epoch Timestamp */
  strftime(buffer3, 32, "00_%s.txt", tm_info); /* Timestamp for filename */

  fp=fopen(buffer3,"w");  /* Open file for writing */
  fprintf(fp,"####################################\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- TEXTPATGEN GENERATED FILE --\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- A generated text file created from:\n");
  fprintf(fp,"# -- tpl-chksum-file-0001.c\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- This file can be very useful in\n");
  fprintf(fp,"# -- transmission tests.\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- Created: %s\n", buffer1);
  fprintf(fp,"# -- Epoch Time: %s\n", buffer2);
  fprintf(fp,"#\n");
  fprintf(fp,"# Total number: %ld\n",finish);
  fprintf(fp,"# Number in a line: %ld\n",width);
  fprintf(fp,"# Text: \"%s\"\n",message);
  fprintf(fp,"#\n");
  fprintf(fp,"####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      fprintf(fp,"%s", message);
      num++;
    }
    fprintf(fp,"%s\n", message);
  }
  fclose(fp); /* Close the file */
  return 0;
}

