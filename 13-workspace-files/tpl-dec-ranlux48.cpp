/*
####################################
#
# -- TEXTPATGEN GENDATA TEMPLATE --
#
# Example usage:
# tpl-dec-ranlux48.cpp 100 10 0 99999 100
#
# The text is written to a timestamped file.
#
####################################
*/

// ----- Written in ISO/IEC 14882:2011 standard C++

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <random>

long int num, finish, width, size, randnum, randmin, randmax, randseed;
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32], buffer3[32];
struct tm* tm_info;

int main(int argc, char* argv[])
{
  finish=std::strtol(argv[1],0,10);
  width=std::strtol(argv[2],0,10);
  randmin=std::strtol(argv[3],0,10);
  randmax=std::strtol(argv[4],0,10);
  randseed=std::strtol(argv[5],0,10);

  /* Random number generator, requires C++11 or later */
  std::ranlux48 generator(randseed);
  std::uniform_int_distribution<long> distribution(randmin,randmax);

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
  std::fprintf(fp,"# -- tpl-dec-ranlux48.cpp\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- Created: %s\n", buffer1);
  std::fprintf(fp,"# -- Epoch Time: %s\n", buffer2);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# Total number: %ld\n",finish);
  std::fprintf(fp,"# Number in a line: %ld\n",width);
  std::fprintf(fp,"# Lowest printable number: %ld\n",randmin);
  std::fprintf(fp,"# Highest printable number: %ld\n",randmax);
  std::fprintf(fp,"# Random number seed: %ld\n",randseed);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      randnum=distribution(generator);  /* Get the random number */
      std::fprintf(fp,"%05ld ", randnum);  /* Print this number */
      num++;
    }
    randnum=distribution(generator);  /* Get the random number */
    std::fprintf(fp,"%05ld\n", randnum);  /* Print this number */
  }
  fclose(fp);
  return 0;
}



