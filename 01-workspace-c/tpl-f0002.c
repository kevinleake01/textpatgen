/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Users can change the output by editing
# this file directly.
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]);

long int num, start, finish;
FILE *fp;

int main(int argc, char *argv[])
{
  start=1;  /* Start line */
  finish=25;  /* Finish line */

  fp=fopen("edit02.txt","w"); /* Open file for writing */
  fprintf(fp,"####################################\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- TEXTPATGEN GENERATED FILE --\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  fprintf(fp,"# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  fprintf(fp,"#\n");
  fprintf(fp,"####################################\n");
  for (num=start; num<=finish; num++)
  { /* Line of text starts here */
    fprintf(fp,"%02ld: The Quick Brown Fox Jumps ", num);
    fprintf(fp,"Over The Lazy Dog\n");
  } /* Line of text ends here */
  fprintf(fp,"# -- End of file.\n");
  fclose(fp);  /* Close file */
}

