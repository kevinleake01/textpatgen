/*
####################################
#
# -- TEXTPATGEN GENDATA TEMPLATE --
#
# Example usage:
# tpl-gendata-0001.c 255 16 255 100
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);

long int num, finish;
long int width, size;
int randnum1, randnum2, randnum3, randnum4;
unsigned int randnum5;

int main(int argc, char *argv[])
{
  finish=atol(argv[1]);
  width=atol(argv[2]);
  randnum3=atoi(argv[3]);
  randnum4=atoi(argv[4]);

  srand(randnum4);  /* Generate random number seed */

  printf("####################################\n");
  printf("#\n");
  printf("# -- TEXTPATGEN GENERATED RANDOM DATA --\n");
  printf("#\n");
  printf("# -- A generated random data file created from:\n");
  printf("# -- tpl-gendata-0001.c\n");
  printf("#\n");
  printf("# Total number: %ld\n",finish);
  printf("# Number in a line: %ld\n",width);
  printf("# Highest printable number: %d\n",randnum3);
  printf("# Random number seed: %d\n",randnum4);
  printf("#\n");
  printf("####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      randnum2=rand();  /* Put random number into randnum2 */
      randnum5=(unsigned int)(randnum2%randnum3); /* Generate the highest printable number */
      printf("%02x", randnum5);  /* Print this number */
      num++;
    }
    randnum2=rand();  /* Put random number into randnum2 */
    randnum5=(unsigned int)(randnum2%randnum3); /* Generate the highest printable number */
    printf("%02x\n", randnum5);  /* Print this number */
  }
  return 0;
}

