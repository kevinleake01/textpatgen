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
  char buffer1[32], buffer2[32], buffer3[32];
  struct tm* tm_info;

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
  fprintf(fp,"# -- Created: %s\n", buffer1);
  fprintf(fp,"# -- Epoch Time: %s\n", buffer2);
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

