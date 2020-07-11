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
  int num, length;
  FILE *fp;

  /* Timestamp info */
  time_t timer;
  char buffer1[32], buffer2[32];
  struct tm* tm_info;

  time(&timer);  /* get the time */
  tm_info=localtime(&timer);

  strftime(buffer1, 32, "%s", tm_info); /* Timestamp to print */
  strftime(buffer2, 32, "00_%s.txt", tm_info); /* Timestamp for filename */

  fp=fopen(buffer2,"w");  /* Open file for writing */
  fprintf(fp,"####################################\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- TEXTPATGEN GENERATED FILE --\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- Epoch Time: %s\n", buffer1);
  fprintf(fp,"#\n");
  fprintf(fp,"####################################\n");
  num=0;
  for (length=0; length<25; length++)
  {
    fprintf(fp,"%04X:The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog:%04d\n", num, num);
    num++;
  }
      
  fprintf(fp,"# -- End of file.\n");
  fclose(fp);
  return 0;
}

