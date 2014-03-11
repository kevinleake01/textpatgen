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

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]);

long int num, start, finish;

int main(int argc, char *argv[])
{
  start=1;  /* Start line */
  finish=25;  /* Finish line */
 
  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED FILE --\n");
  std::printf("# -- C++ VERSION --\n");
  std::printf("#\n");
  std::printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  std::printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  std::printf("#\n");
  std::printf("####################################\n");
  for (num=start; num<=finish; num++)
  { /* Line of text starts here */
    std::cout << num << " The Quick Brown Fox Jumps ";
    std::cout << "Over The Lazy Dog." << std::endl;
  } /* Line of text ends here */
  std::printf("# -- End of file.\n");
}

