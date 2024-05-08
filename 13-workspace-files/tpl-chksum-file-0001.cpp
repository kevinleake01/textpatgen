/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-chksum-file-0001.cpp 255 16 "+"
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

long int num, finish;
long int width, size;
char message[1000];
FILE *fp;

/* Timestamp info */
time_t timer;
char buffer1[32], buffer2[32], buffer3[32];
struct tm* tm_info;

int main(int argc, char *argv[])
{
  finish=std::atol(argv[1]);
  width=std::atol(argv[2]);
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
  std::fprintf(fp,"# -- A generated text file created from:\n");
  std::fprintf(fp,"# -- tpl-chksum-file-0001.cpp\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- This file can be very useful in\n");
  std::fprintf(fp,"# -- transmission tests.\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- Created: %s\n", buffer1);
  std::fprintf(fp,"# -- Epoch Time: %s\n", buffer2);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# Total number: %ld\n",finish);
  std::fprintf(fp,"# Number in a line: %ld\n",width);
  std::fprintf(fp,"# Text: \"%s\"\n",message);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::fprintf(fp,"%s", message);
      num++;
    }
    std::fprintf(fp,"%s\n", message);
  }
  std::fclose(fp); /* Close the file */
  return 0;
}

