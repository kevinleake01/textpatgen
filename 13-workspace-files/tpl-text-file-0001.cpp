/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-text-file-0001.cpp 0 20 "The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog"
#
# The text is written to a timestamped file.
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
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32], buffer3[32];
struct tm* tm_info;

int main(int argc, char *argv[])
{
  start=std::atol(argv[1]);
  finish=std::atol(argv[2]);
  std::strcpy(message, argv[3]);

  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* ISO-8601 Timestamp */
  std::strftime(buffer2, 32, "%s", tm_info); /* Epoch Timestamp */
  std::strftime(buffer3, 32, "00_%s.txt", tm_info); /* Timestamp for filename */

  fp=std::fopen(buffer3,"w");  /* Open file for writing */
  std::fprintf(fp,"####################################\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- TEXTPATGEN GENERATED FILE --\n");
  std::fprintf(fp,"# -- C++ VERSION --\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- tpl-text-file-0001.cpp --\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- Created: %s\n", buffer1);
  std::fprintf(fp,"# -- Epoch Time: %s\n", buffer2);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  std::fprintf(fp,"# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  std::fprintf(fp,"# Message text: \"%s\"\n",message);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"####################################\n");
  for (num=start; num<=finish; num++)
  {
    std::fprintf(fp,"X%04lX:%s:D%04ld\n", num, message, num);
  }
  std::fprintf(fp,"# -- End of file.\n");
  std::fclose(fp); /* Close the file */
  return 0;
}

