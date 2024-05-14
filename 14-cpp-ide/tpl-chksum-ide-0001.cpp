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
char message[1000];
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32];
struct tm* tm_info;

int main(int argc, char *argv[])
{
  finish=256;
  width=16;
  std::strcpy(message, "+");

  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* ISO-8601 Timestamp */
  std::strftime(buffer2, 32, "%s", tm_info); /* Epoch Timestamp */

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED FILE --\n");
  std::printf("# -- C++ VERSION --\n");
  std::printf("#\n");
  std::printf("# -- A generated text file created from:\n");
  std::printf("# -- tpl-chksum-ide-0001.cpp\n");
  std::printf("#\n");
  std::printf("# -- This file can be very useful in\n");
  std::printf("# -- transmission tests.\n");
  std::printf("#\n");
  std::printf("# -- Created: %s\n", buffer1);
  std::printf("# -- Epoch Time: %s\n", buffer2);
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

