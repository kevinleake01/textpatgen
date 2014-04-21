/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-text-0001.cpp 0 20 "The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog"
#
####################################
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]);

long int num, start, finish;
char message[1000];

int main(int argc, char *argv[])
{
  start=std::atol(argv[1]);
  finish=std::atol(argv[2]);
  std::strcpy(message, argv[3]);

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED FILE --\n");
  std::printf("#\n");
  std::printf("# -- A generated text file from:\n");
  std::printf("# -- tpl-text-0001.cpp\n");
  std::printf("#\n");
  std::printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  std::printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  std::printf("# Message text: \"%s\"\n",message);
  std::printf("#\n");
  std::printf("####################################\n");
  for (num=start; num<=finish; num++)
  {
    std::printf("X%04lX:%s:D%04ld\n", num, message, num);
  }
  std::printf("# -- End of file.\n");
  return 0;
}

