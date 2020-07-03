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
void numgen(long int start, long int finish, long int size);

long int num, start, finish;
long int width, size;
wofstream outfile;
wchar_t message[5]=L"X-";  /* Message text */
wchar_t separator[5]=L" ";  /* Separator text */

int main(int argc, char *argv[])
{
  start=0;  /* Start number */
  finish=255; /* Finish number */
  width=16;  /* Numbers in a line */

  outfile.setf(ios_base::uppercase);  /* Use uppercase for Hex numbers */

  outfile.open("file0002.txt", ios_base::out);  /* Open file for writing */
  outfile << L"####################################\n";
  outfile << L"#\n";
  outfile << L"# -- TEXTPATGEN GENERATED FILE --\n";
  outfile << L"# -- C++ VERSION --\n";
  outfile << L"#\n";
  outfile << L"# Start number: " << setbase(10) << start << L" ( 0x" << setbase(16) << start;
  outfile << L" Hex 0" << setbase(8) << start << L" Octal )\n"; 
  outfile << L"# Finish number: " << setbase(10) << finish << L" ( 0x" << setbase(16) << finish;
  outfile << L" Hex 0" << setbase(8) << finish << L" Octal )\n";
  outfile << L"# Numbers in a line: " << setbase(10) << width << endl;
  outfile << L"#\n";
  outfile << L"####################################\n";
  numgen(start, finish, size);
  outfile << L"# -- End of file.\n";
  outfile.close();  /* Close file */
  return 0;
}

void numgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      outfile << message;
      outfile << setbase(16) << setw(4) << setfill(L'0') << num;  /* Number base format */
      outfile << separator;
      num++;
    }
    outfile << message;
    outfile << setbase(16) << setw(4) << setfill(L'0') << num << endl;  /* Number base format */
  }
}

