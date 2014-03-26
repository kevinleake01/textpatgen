/*
####################################
#
# -- TEXTPATGEN GENDATA TEMPLATE --
#
# Example usage:
# tpl-gendata-0003.cpp 255 16 32767 100
#
####################################
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]);

long int num, finish;
long int width, size;
int randnum1, randnum2, randnum3, randnum4;
unsigned int randnum5;

int main(int argc, char *argv[])
{
  finish=std::atol(argv[1]);
  width=std::atol(argv[2]);
  randnum3=std::atoi(argv[3]);
  randnum4=std::atoi(argv[4]);

  std::srand(randnum4);  /* Generate random number seed */

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED RANDOM DATA --\n");
  std::printf("#\n");
  std::printf("# -- A generated random data file created from:\n");
  std::printf("# -- tpl-gendata-0003.cpp\n");
  std::printf("#\n");
  std::printf("# Total number: %ld\n",finish);
  std::printf("# Number in a line: %ld\n",width);
  std::printf("# Highest printable number: %d\n",randnum3);
  std::printf("# Random number seed: %d\n",randnum4);
  std::printf("#\n");
  std::printf("####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      randnum2=std::rand();  /* Put random number into randnum2 */
      randnum5=(unsigned int)(randnum2%randnum3); /* Generate the highest printable number */
      std::printf("%04x ", randnum5);  /* Print this number */
      num++;
    }
    randnum2=std::rand();  /* Put random number into randnum2 */
    randnum5=(unsigned int)(randnum2%randnum3); /* Generate the highest printable number */
    std::printf("%04x\n", randnum5);  /* Print this number */
  }
}

