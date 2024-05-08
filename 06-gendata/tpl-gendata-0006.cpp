/*
####################################
#
# -- TEXTPATGEN GENDATA TEMPLATE --
#
# Example usage:
# tpl-gendata-0006.cpp 256 16 0 255 100
#
####################################
*/

// ----- Written in ISO/IEC 14882:2011 standard C++

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <random>

long int num, finish, width, size, randnum, randmin, randmax, randseed;

int main(int argc, char* argv[])
{
  finish=std::strtol(argv[1],0,10);
  width=std::strtol(argv[2],0,10);
  randmin=std::strtol(argv[3],0,10);
  randmax=std::strtol(argv[4],0,10);
  randseed=std::strtol(argv[5],0,10);

  std::default_random_engine generator(randseed);
  std::uniform_int_distribution<long> distribution(randmin,randmax);

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED RANDOM DATA --\n");
  std::printf("#\n");
  std::printf("# -- A generated random data file created from:\n");
  std::printf("# -- tpl-gendata-0006.cpp\n");
  std::printf("#\n");
  std::printf("# Total number: %ld\n",finish);
  std::printf("# Number in a line: %ld\n",width);
  std::printf("# Lowest printable number: %ld\n",randmin);
  std::printf("# Highest printable number: %ld\n",randmax);
  std::printf("# Random number seed: %ld\n",randseed);
  std::printf("#\n");
  std::printf("####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      randnum=distribution(generator);  /* Get the random number */
      std::printf("%02lx ", randnum);  /* Print this number */
      num++;
    }
    randnum=distribution(generator);  /* Get the random number */
    std::printf("%02lx\n", randnum);  /* Print this number */
  }
  return 0;
}



