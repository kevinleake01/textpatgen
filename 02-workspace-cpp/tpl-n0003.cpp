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

#include <iostream>
#include <iomanip>

int main(int argc, char *argv[]);
void numgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
char message[5]="X-";  /* Message text */
char separator[5]=" ";  /* Separator text */

int main(int argc, char *argv[])
{
  start=0;  /* Start number */
  finish=255; /* Finish number */
  width=16;  /* Numbers in a line */

  std::cout.setf(std::ios_base::uppercase);  /* Use uppercase for Hex numbers */

  std::cout << "####################################\n";
  std::cout << "#\n";
  std::cout << "# -- TEXTPATGEN GENERATED FILE --\n";
  std::cout << "# -- C++ VERSION --\n";
  std::cout << "#\n";
  std::cout << "# Start number: " << std::setbase(10) << start << " ( 0x" << std::setbase(16) << start;
  std::cout << " Hex 0" << std::setbase(8) << start << " Octal )\n"; 
  std::cout << "# Finish number: " << std::setbase(10) << finish << " ( 0x" << std::setbase(16) << finish;
  std::cout << " Hex 0" << std::setbase(8) << finish << " Octal )\n";
  std::cout << "# Numbers in a line: " << std::setbase(10) << width << std::endl;
  std::cout << "#\n";
  std::cout << "####################################\n";
  numgen(start, finish, size);
  std::cout << "# -- End of file.\n";
  return 0;
}

void numgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::cout << message;
      std::cout << std::setbase(16) << std::setw(4) << std::setfill('0') << num;  /* Number base format */
      std::cout << separator;
      num++;
    }
    std::cout <<  message;
    std::cout << std::setbase(16) << std::setw(4) << std::setfill('0') << num << std::endl;  /* Number base format */
  }
}

