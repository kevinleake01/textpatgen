/*
####################################
#
# -- TEXTPATGEN GENDATA TEMPLATE --
#
# Example usage:
# tpl-gendata-0008.cpp 100 10 0 99 100
#
####################################
*/

// ----- Written in ISO/IEC 14882:2011 standard C++

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <random>

using namespace std;

long long int num, finish, width, size, randnum, randmin, randmax, randseed;

int main(int argc, char* argv[])
{
  finish=strtoll(argv[1],0,10);
  width=strtoll(argv[2],0,10);
  randmin=strtoll(argv[3],0,10);
  randmax=strtoll(argv[4],0,10);
  randseed=strtoll(argv[5],0,10);

  std::default_random_engine generator(randseed);
  std::uniform_int_distribution<long long> distribution(randmin,randmax);

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED RANDOM DATA --\n");
  std::printf("#\n");
  std::printf("# -- A generated random data file created from:\n");
  std::printf("# -- tpl-gendata-0008.cpp\n");
  std::printf("#\n");
  std::printf("# Total number: %lld\n",finish);
  std::printf("# Number in a line: %lld\n",width);
  std::printf("# Lowest printable number: %lld\n",randmin);
  std::printf("# Highest printable number: %lld\n",randmax);
  std::printf("# Random number seed: %lld\n",randseed);
  std::printf("#\n");
  std::printf("####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      randnum=distribution(generator);  /* Get the random number */
      std::printf("%02lld ", randnum);  /* Print this number */
      num++;
    }
    randnum=distribution(generator);  /* Get the random number */
    std::printf("%02lld\n", randnum);  /* Print this number */
  }
}



