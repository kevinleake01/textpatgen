/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-chksum-0001.cpp 255 16 "+"
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
char message[1000];

int main(int argc, char *argv[])
{
  finish=std::atol(argv[1]);
  width=std::atol(argv[2]);
  std::strcpy(message, argv[3]);

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED FILE --\n");
  std::printf("#\n");
  std::printf("# -- A generated text file created from:\n");
  std::printf("# -- tpl-chksum-0001.cpp\n");
  std::printf("#\n");
  std::printf("# -- This file can be very useful in\n");
  std::printf("# -- transmission tests.\n");
  std::printf("#\n");
  std::printf("# Total number: %ld\n",finish);
  std::printf("# Number in a line: %ld\n",width);
  std::printf("# Text: \"%s\"\n",message);
  std::printf("#\n");
  std::printf("####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::printf("%s", message);
      num++;
    }
    std::printf("%s\n", message);
  }
  return 0;
}

