/*
####################################
#
# -- TEXTPATGEN GENDATA TEMPLATE --
#
# Example usage:
# tpl-gendata-file-0004.cpp 100 10 99 100
#
# The text is written to a timestamped file.
#
####################################
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

int main(int argc, char *argv[]);

long int num, finish;
long int width, size;
int randnum1, randnum2, randnum3, randnum4;
unsigned int randnum5;
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32], buffer3[32];
struct tm* tm_info;

int main(int argc, char *argv[])
{
  finish=std::atol(argv[1]);
  width=std::atol(argv[2]);
  randnum3=std::atoi(argv[3]);
  randnum4=std::atoi(argv[4]);

  std::srand(randnum4);  /* Generate random number seed */

  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* ISO-8601 Timestamp */
  std::strftime(buffer2, 32, "%s", tm_info); /* Epoch Timestamp */
  std::strftime(buffer3, 32, "00_%s.txt", tm_info); /* Timestamp for filename */

  fp=std::fopen(buffer3,"w");  /* Open file for writing */
  std::fprintf(fp,"####################################\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- TEXTPATGEN GENERATED RANDOM DATA --\n");
  std::fprintf(fp,"# -- C++ VERSION --\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- A generated random data file created from:\n");
  std::fprintf(fp,"# -- tpl-gendata-file-0004.cpp\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- Created: %s\n", buffer1);
  std::fprintf(fp,"# -- Epoch Time: %s\n", buffer2);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# Total number: %ld\n",finish);
  std::fprintf(fp,"# Number in a line: %ld\n",width);
  std::fprintf(fp,"# Highest printable number: %d\n",randnum3);
  std::fprintf(fp,"# Random number seed: %d\n",randnum4);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      randnum2=std::rand();  /* Put random number into randnum2 */
      randnum5=(unsigned int)(randnum2%randnum3); /* Generate the highest printable number */
      std::fprintf(fp,"%02u ", randnum5);  /* Print this number */
      num++;
    }
    randnum2=std::rand();  /* Put random number into randnum2 */
    randnum5=(unsigned int)(randnum2%randnum3); /* Generate the highest printable number */
    std::fprintf(fp,"%02u\n", randnum5);  /* Print this number */
  }
  std::fclose(fp);
  return 0;
}

