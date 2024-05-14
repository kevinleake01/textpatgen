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

long int num, start, finish;
char message[1000];

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32];
struct tm* tm_info;

int main(int argc, char *argv[])
{
  start=0;
  finish=20;
  std::strcpy(message, "The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog");

  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* ISO-8601 Timestamp */
  std::strftime(buffer2, 32, "%s", tm_info); /* Epoch Timestamp */

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED FILE --\n");
  std::printf("# -- C++ VERSION --\n");
  std::printf("#\n");
  std::printf("# -- tpl-text-ide-0001.cpp --\n");
  std::printf("#\n");
  std::printf("# -- Created: %s\n", buffer1);
  std::printf("# -- Epoch Time: %s\n", buffer2);
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

