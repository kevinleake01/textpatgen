/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-text-0001.c 0 20 "The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog"
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

long int num, start, finish;
char message[1000];
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32];
struct tm* tm_info;

int main(int argc, char *argv[])
{
  start=atol(argv[1]);
  finish=atol(argv[2]);
  strcpy(message, argv[3]);

  time(&timer);  /* get the time */
  tm_info=localtime(&timer);

  strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* Timestamp to print */
  strftime(buffer2, 32, "00_%Y%m%d_%H%M%S.txt", tm_info); /* Timestamp for filename */

  fp=fopen(buffer2,"w"); /* Open file for writing */
  fprintf(fp,"####################################\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- TEXTPATGEN GENERATED FILE --\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- tpl-text-file-0001.c --\n", buffer1);
  fprintf(fp,"#\n");
  fprintf(fp,"# -- %s --\n", buffer1);
  fprintf(fp,"#\n");
  fprintf(fp,"# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  fprintf(fp,"# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  fprintf(fp,"# Message text: \"%s\"\n",message);
  fprintf(fp,"#\n");
  fprintf(fp,"####################################\n");
  for (num=start; num<=finish; num++)
  {
    fprintf(fp,"X%04lX:%s:D%04ld\n", num, message, num);
  }
  fprintf(fp,"# -- End of file.\n");
  fclose(fp);  /* Close file */
  return 0;
}

