/*
####################################
#
# -- TEXTPATGEN GENDATA TEMPLATE --
#
# Example usage:
# tpl-gendata-file-0009.cpp 100 10 0 32767 100
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

long long int num, finish, width, size, randnum, randmin, randmax, randseed;
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32];
struct tm* tm_info;

int main(int argc, char* argv[])
{
  finish=std::strtoll(argv[1],0,10);
  width=std::strtoll(argv[2],0,10);
  randmin=std::strtoll(argv[3],0,10);
  randmax=std::strtoll(argv[4],0,10);
  randseed=std::strtoll(argv[5],0,10);

  /* Random number generator, requires C++11 or later */
  std::default_random_engine generator(randseed);
  std::uniform_int_distribution<long long> distribution(randmin,randmax);

  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* Timestamp to print */
  std::strftime(buffer2, 32, "00_%Y%m%d_%H%M%S.txt", tm_info); /* Timestamp for filename */

  fp=std::fopen(buffer2,"w");  /* Open file for writing */
  std::fprintf(fp,"####################################\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- TEXTPATGEN GENERATED RANDOM DATA --\n");
  std::fprintf(fp,"# -- C++ VERSION --\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- A generated random data file created from:\n");
  std::fprintf(fp,"# -- tpl-gendata-file-0009.cpp\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- %s --\n", buffer1);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# Total number: %lld\n",finish);
  std::fprintf(fp,"# Number in a line: %lld\n",width);
  std::fprintf(fp,"# Lowest printable number: %lld\n",randmin);
  std::fprintf(fp,"# Highest printable number: %lld\n",randmax);
  std::fprintf(fp,"# Random number seed: %lld\n",randseed);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      randnum=distribution(generator);  /* Get the random number */
      std::fprintf(fp,"%05lld ", randnum);  /* Print this number */
      num++;
    }
    randnum=distribution(generator);  /* Get the random number */
    std::fprintf(fp,"%05lld\n", randnum);  /* Print this number */
  }
  fclose(fp);
  return 0;
}



