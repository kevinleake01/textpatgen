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

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

int main(int argc, char *argv[]);

long int num, finish;
long int width, size;
int randnum1, randnum2, randnum3, randnum4;
unsigned int randnum5;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32];
struct tm* tm_info;

int main(int argc, char *argv[])
{
  finish=100;
  width=10;
  randnum3=65535;
  randnum4=100;

  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* ISO-8601 Timestamp */
  std::strftime(buffer2, 32, "%s", tm_info); /* Epoch Timestamp */

  std::srand(randnum4);  /* Generate random number seed */

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED RANDOM DATA --\n");
  std::printf("#\n");
  std::printf("# -- A generated random data file created from:\n");
  std::printf("# -- tpl-gendata-ide-0005.cpp\n");
  std::printf("#\n");
  std::printf("# -- Created: %s\n", buffer1);
  std::printf("# -- Epoch Time: %s\n", buffer2);
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
      std::printf("%05u ", randnum5);  /* Print this number */
      num++;
    }
    randnum2=std::rand();  /* Put random number into randnum2 */
    randnum5=(unsigned int)(randnum2%randnum3); /* Generate the highest printable number */
    std::printf("%05u\n", randnum5);  /* Print this number */
  }
  return 0;
}

