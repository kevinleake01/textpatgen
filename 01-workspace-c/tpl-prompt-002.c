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
int decgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char filename[127];  /* Filename */
FILE *fp;  /* File pointer */
char message[5]="D-";  /* Message text */
char separator[5]=" ";  /* Separator text */

int main(int argc, char *argv[])
{
  printf("-- TEXTPATGEN TPL-PROMPT-002 --\n\n");
  printf("Enter file to create: ");
  scanf("%s", filename);
  printf("Start number: ");
  scanf("%i", &start);
  printf("Finish number: ");
  scanf("%i", &finish);
  printf("Numbers in a line: ");
  scanf("%i", &width);

  fp=fopen(filename,"w");
  fprintf(fp, "####################################\n");
  fprintf(fp, "#\n");
  fprintf(fp, "# -- TEXTPATGEN GENERATED FILE --\n");
  fprintf(fp, "#\n");
  fprintf(fp, "# -- A generated text file created from:\n");
  fprintf(fp, "# -- tpl-prompt-002.c\n");
  fprintf(fp, "#\n");
  fprintf(fp, "# Filename: %s\n",filename);
  fprintf(fp, "# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  fprintf(fp, "# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  fprintf(fp, "# Numbers in a line: %ld\n",width);
  fprintf(fp, "#\n");
  fprintf(fp, "####################################\n");
  decgen(start, finish, size);
  fprintf(fp, "# -- End of file.\n");
  fclose(fp);
}

int decgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      fprintf(fp, "%s", message);
      fprintf(fp, "%04ld", num);
      fprintf(fp, "%s", separator);
      num++;
    }
    fprintf(fp, "%s", message);
    fprintf(fp, "%04ld\n", num);
  }
}

