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

// ----- Written in ISO/IEC 14882:2011 standard C++

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <random>

long int num, finish, width, size, randnum, randmin, randmax, randseed;

int main(int argc, char* argv[])
{
  finish=100;
  width=10;
  randmin=0;
  randmax=65535;
  randseed=100;

  std::default_random_engine generator(randseed);
  std::uniform_int_distribution<long> distribution(randmin,randmax);

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED RANDOM DATA --\n");
  std::printf("#\n");
  std::printf("# -- A generated random data file created from:\n");
  std::printf("# -- tpl-gendata-ide-0009.cpp\n");
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
      std::printf("%05ld ", randnum);  /* Print this number */
      num++;
    }
    randnum=distribution(generator);  /* Get the random number */
    std::printf("%05ld\n", randnum);  /* Print this number */
  }
  return 0;
}



