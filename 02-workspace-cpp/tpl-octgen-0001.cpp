/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-octgen-0001.cpp 0 255 8
#
####################################
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(int argc, char *argv[]);
void hexgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char message[5]="X-";  /* Message text */
char separator[5]=" ";  /* Separator text */

int main(int argc, char *argv[])
{
  start=std::atol(argv[1]);
  finish=std::atol(argv[2]);
  width=std::atol(argv[3]);

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED FILE --\n");
  std::printf("#\n");
  std::printf("# -- A generated text file created from:\n");
  std::printf("# -- tpl-octgen-0001.cpp\n");
  std::printf("#\n");
  std::printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  std::printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  std::printf("# Numbers in a line: %ld\n",width);
  std::printf("#\n");
  std::printf("####################################\n");
  hexgen(start, finish, size);
  std::printf("# -- End of file.\n");
  return 0;
}

void hexgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::printf("%s", message);
      std::printf("%05lo", num);
      std::printf("%s", separator);
      num++;
    }
    std::printf("%s", message);
    std::printf("%05lo\n", num);
  }
}

