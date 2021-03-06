/*
####################################
#
# --- TEXTPATGEN TEMPLATE ---
#
# Users can change the output by editing
# this file directly.
#
# The text is written to a timestamped file.
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int num, length, width;
  FILE *fp;

  /* Timestamp info */
  time_t timer;
  char buffer1[32], buffer2[32];
  struct tm* tm_info;

  time(&timer);  /* get the time */
  tm_info=localtime(&timer);

  strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* Timestamp to print */
  strftime(buffer2, 32, "00_%Y%m%d_%H%M%S.txt", tm_info); /* Timestamp for filename */

  fp=fopen(buffer2,"w");  /* Open file for writing */
  fprintf(fp,"####################################\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- TEXTPATGEN GENERATED FILE --\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- %s --\n", buffer1);
  fprintf(fp,"#\n");
  fprintf(fp,"####################################\n");
  num=0;
  for (length=0; length<16; length++)
  {
    for (width=0; width<15; width++)
    {
      fprintf(fp,"X-%04X ", num);
      num++;
    }
    fprintf(fp,"X-%04X\n", num);
    num++;
  }     
  fprintf(fp,"# -- End of file.\n");
  fclose(fp);
  return 0;
}

