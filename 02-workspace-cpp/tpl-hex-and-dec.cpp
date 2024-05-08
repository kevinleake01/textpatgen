/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-hex-and-dec.cpp "0,99,10"
#
####################################
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(int argc, char *argv[]);
void hexgen_dash(long int start, long int finish, long int size);
void decgen_dash(long int start, long int finish, long int size);
void hexgen_nodash(long int start, long int finish, long int size);
void decgen_nodash(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char extinfo[1000];

int main(int argc, char *argv[])
{
  std::strcpy(extinfo, argv[1]);  /* Get the extra information */
  std::sscanf(extinfo, "%ld,%ld,%ld", &start, &finish, &width );  /* Process this information */

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED FILE --\n");
  std::printf("#\n");
  std::printf("# -- A generated text file from\n");
  std::printf("# -- tpl-hex-and-dec.cpp\n");
  std::printf("#\n");
  std::printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  std::printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  std::printf("# Numbers in a line: %ld\n",width);
  std::printf("#\n");
  std::printf("####################################\n");
  hexgen_dash(start, finish, size);
  std::printf("####################################\n");
  decgen_dash(start, finish, size);
  std::printf("####################################\n");
  hexgen_nodash(start, finish, size);
  std::printf("####################################\n");
  decgen_nodash(start, finish, size);
  std::printf("# -- End of file.\n");
  return 0;
}

void hexgen_dash(long int start, long int finish, long int size)
{
  std::printf("# -- Generated Hex numbers with dashes.\n");
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::printf("X%04lX-", num);
      num++;
    }
    std::printf("X%04lX\n", num);
  }
}

void decgen_dash(long int start, long int finish, long int size)
{
  std::printf("# -- Generated Decimal numbers with dashes.\n");
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::printf("D%04ld-", num);
      num++;
    }
    std::printf("D%04ld\n", num);
  }
}

void hexgen_nodash(long int start, long int finish, long int size)
{
  std::printf("# -- Generated Hex numbers without dashes.\n");
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::printf("X%04lX ", num);
      num++;
    }
    std::printf("X%04lX\n", num);
  }
}

void decgen_nodash(long int start, long int finish, long int size)
{
  std::printf("# -- Generated Decimal numbers without dashes.\n");
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::printf("D%04ld ", num);
      num++;
    }
    std::printf("D%04ld\n", num);
  }
}

