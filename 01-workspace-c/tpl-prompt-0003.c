/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);

long int num, start, finish;
long int width, size;
char filename[127];  /* Filename */
FILE *fp;  /* File pointer */
char message[1000];  /* Message text */

int main(int argc, char *argv[])
{
  printf("-- TEXTPATGEN TPL-PROMPT-0003 --\n\n");
  printf("Enter file to create: ");
  scanf("%s", filename);
  printf("Start number: ");
  scanf("%li", &start);
  printf("Finish number: ");
  scanf("%li", &finish);
  printf("Message text: ");
  scanf("%s", message);

  fp=fopen(filename,"w");
  fprintf(fp, "####################################\n");
  fprintf(fp, "#\n");
  fprintf(fp, "# -- TEXTPATGEN GENERATED FILE --\n");
  fprintf(fp, "#\n");
  fprintf(fp, "# -- A generated text file created from:\n");
  fprintf(fp, "# -- tpl-prompt-0003.c\n");
  fprintf(fp, "#\n");
  fprintf(fp, "# Filename: %s\n",filename);
  fprintf(fp, "# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  fprintf(fp, "# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  fprintf(fp, "# Message text: \"%s\"\n",message);
  fprintf(fp, "#\n");
  fprintf(fp, "####################################\n");
  for (num=start; num<=finish; num++)
  {
    fprintf(fp, "X%04lX:%s:D%04ld\n", num, message, num);
  }

  fprintf(fp, "# -- End of file.\n");
  fclose(fp);
  return 0;
}

