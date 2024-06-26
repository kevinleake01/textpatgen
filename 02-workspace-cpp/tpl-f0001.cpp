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
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]);
void numgen(long int start, long int finish, long int size1);

long int num, start, finish;
long int width, size1;
ofstream outfile;
char message[5]="X-";  /* Message text */
char separator[5]=" ";  /* Separator text */

int main(int argc, char *argv[])
{
  start=0;  /* Start number */
  finish=255; /* Finish number */
  width=16;  /* Numbers in a line */

  outfile.setf(ios_base::uppercase);  /* Use uppercase for Hex numbers */

  outfile.open("file0001.txt", ios_base::out);  /* Open file for writing */
  outfile << "####################################\n";
  outfile << "#\n";
  outfile << "# -- TEXTPATGEN GENERATED FILE --\n";
  outfile << "# -- C++ VERSION --\n";
  outfile << "#\n";
  outfile << "# Start number: " << setbase(10) << start << " ( 0x" << setbase(16) << start;
  outfile << " Hex 0" << setbase(8) << start << " Octal )\n"; 
  outfile << "# Finish number: " << setbase(10) << finish << " ( 0x" << setbase(16) << finish;
  outfile << " Hex 0" << setbase(8) << finish << " Octal )\n";
  outfile << "# Numbers in a line: " << setbase(10) << width << endl;
  outfile << "#\n";
  outfile << "####################################\n";
  numgen(start, finish, size1);
  outfile << "# -- End of file.\n";
  outfile.close();  /* Close file */
  return 0;
}

void numgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size1=0; size1<width-1; size1++)
    {
      if (num == finish) break;
      outfile << message;
      outfile << setbase(16) << setw(4) << setfill('0') << num;  /* Number base format */
      outfile << separator;
      num++;
    }
    outfile <<  message;
    outfile << setbase(16) << setw(4) << setfill('0') << num << endl;  /* Number base format */
  }
}

