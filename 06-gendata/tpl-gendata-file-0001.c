/*
####################################
#
# -- TEXTPATGEN GENDATA TEMPLATE --
#
# Example usage:
# tpl-gendata-file-0001.c 255 16 255 100
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
int randnum1, randnum2, randnum3, randnum4;
unsigned int randnum5;
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32];
struct tm* tm_info;

int main(int argc, char *argv[])
{
  finish=atol(argv[1]);
  width=atol(argv[2]);
  randnum3=atoi(argv[3]);
  randnum4=atoi(argv[4]);

  srand(randnum4);  /* Generate random number seed */

  time(&timer);  /* get the time */
  tm_info=localtime(&timer);

  strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* Timestamp to print */
  strftime(buffer2, 32, "00_%Y%m%d_%H%M%S.txt", tm_info); /* Timestamp for filename */

  fp=fopen(buffer2,"w");  /* Open file for writing */
  fprintf(fp,"####################################\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- TEXTPATGEN GENERATED RANDOM DATA --\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- A generated random data file created from:\n");
  fprintf(fp,"# -- tpl-gendata-file-0001.c\n");
  fprintf(fp,"#\n");
  fprintf(fp,"# -- %s --\n", buffer1);
  fprintf(fp,"#\n");
  fprintf(fp,"# Total number: %ld\n",finish);
  fprintf(fp,"# Number in a line: %ld\n",width);
  fprintf(fp,"# Highest printable number: %d\n",randnum3);
  fprintf(fp,"# Random number seed: %d\n",randnum4);
  fprintf(fp,"#\n");
  fprintf(fp,"####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      randnum2=rand();  /* Put random number into randnum2 */
      randnum5=(unsigned int)(randnum2%randnum3); /* Generate the highest printable number */
      fprintf(fp,"%02x", randnum5);  /* Print this number */
      num++;
    }
    randnum2=rand();  /* Put random number into randnum2 */
    randnum5=(unsigned int)(randnum2%randnum3); /* Generate the highest printable number */
    fprintf(fp,"%02x\n", randnum5);  /* Print this number */
  }
  fclose(fp);
  return 0;
}

