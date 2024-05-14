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
void numgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32];
struct tm* tm_info;

char message[5]="";  /* Message text */
char separator[5]="-";  /* Separator text */

int main(int argc, char *argv[])
{
  start=0;
  finish=255;
  width=16;

  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* ISO-8601 Timestamp */
  std::strftime(buffer2, 32, "%s", tm_info); /* Epoch Timestamp */

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED FILE --\n");
  std::printf("# -- C++ VERSION --\n");
  std::printf("#\n");
  std::printf("# -- tpl-hexgen-ide-0002.cpp --\n");
  std::printf("#\n");
  std::printf("# -- Created: %s\n", buffer1);
  std::printf("# -- Epoch Time: %s\n", buffer2);
  std::printf("#\n");
  std::printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  std::printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  std::printf("# Numbers in a line: %ld\n",width);
  std::printf("#\n");
  std::printf("####################################\n");
  numgen(start, finish, size);
  std::printf("# -- End of file.\n");
  return 0;
}

void numgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::printf("%s", message);
      std::printf("%02lX", num);
      std::printf("%s", separator);
      num++;
    }
    std::printf("%s", message);
    std::printf("%02lX\n", num);
  }
}

