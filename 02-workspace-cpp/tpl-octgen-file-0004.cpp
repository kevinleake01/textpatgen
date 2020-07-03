/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-octgen-file-0004.cpp 0 255 8
#
# The text is written to a timestamped file.
#
####################################
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

using namespace std;

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
  start=std::atol(argv[1]);
  finish=std::atol(argv[2]);
  width=std::atol(argv[3]);

  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "%s", tm_info); /* Timestamp to print */
  std::strftime(buffer2, 32, "00_%s.txt", tm_info); /* Timestamp for filename */

  fp=std::fopen(buffer2,"w");  /* Open file for writing */
  std::fprintf(fp,"####################################\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- TEXTPATGEN GENERATED FILE --\n");
  std::fprintf(fp,"# -- C++ VERSION --\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- tpl-octgen-file-0004.cpp --\n");
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# -- Epoch Time: %s\n", buffer1);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  std::fprintf(fp,"# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  std::fprintf(fp,"# Numbers in a line: %ld\n",width);
  std::fprintf(fp,"#\n");
  std::fprintf(fp,"####################################\n");
  numgen(start, finish, size);
  std::fprintf(fp,"# -- End of file.\n");
  std::fclose(fp); /* Close the file */
  return 0;
}

void numgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::fprintf(fp,"%s", message);
      std::fprintf(fp,"%05lo", num);
      std::fprintf(fp,"%s", separator);
      num++;
    }
    std::fprintf(fp,"%s", message);
    std::fprintf(fp,"%05lo\n", num);
  }
}

