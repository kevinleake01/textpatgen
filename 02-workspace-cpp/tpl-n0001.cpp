/*
####################################
#
# --- TEXTPATGEN TEMPLATE ---
#
# Users can change the output by editing
# this file directly.
#
####################################
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]);
int numgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char message[5]="X-";  /* Message text */
char separator[5]=" ";  /* Separator text */

int main(int argc, char *argv[])
{
  start=0;  /* Start number */
  finish=255; /* Finish number */
  width=16;  /* Numbers in a line */

  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# -- TEXTPATGEN GENERATED FILE --\n");
  std::printf("# -- C++ VERSION --\n");
  std::printf("#\n");
  std::printf("# Start number: %ld ( 0x%lX Hex, 0%lo Octal )\n",start,start,start);
  std::printf("# Finish number: %ld ( 0x%lX Hex, 0%lo Octal )\n",finish,finish,finish);
  std::printf("# Numbers in a line: %ld\n",width);
  std::printf("#\n");
  std::printf("####################################\n");
  numgen(start, finish, size);
  std::printf("# -- End of file.\n");

}

int numgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::printf("%s", message);
      std::printf("%04lX", num);  /* Number base format */
      std::printf("%s", separator);
      num++;
    }
    std::printf("%s", message);
    std::printf("%04lX\n", num);  /* Number base format */
  }
}

