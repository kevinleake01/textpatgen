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
wchar_t message[5]=L"X-";  /* Message text */
wchar_t separator[5]=L" ";  /* Separator text */

int main(int argc, char *argv[])
{
  start=0;  /* Start number */
  finish=255; /* Finish number */
  width=16;  /* Numbers in a line */

  std::wcout.setf(std::ios_base::uppercase);  /* Use uppercase for Hex numbers */

  std::wcout << L"####################################\n";
  std::wcout << L"#\n";
  std::wcout << L"# -- TEXTPATGEN GENERATED FILE --\n";
  std::wcout << L"# -- C++ VERSION --\n";
  std::wcout << L"#\n";
  std::wcout << L"# Start number: " << std::setbase(10) << start << L" ( 0x" << std::setbase(16) << start;
  std::wcout << L" Hex 0" << std::setbase(8) << start << L" Octal )\n"; 
  std::wcout << L"# Finish number: " << std::setbase(10) << finish << L" ( 0x" << std::setbase(16) << finish;
  std::wcout << L" Hex 0" << std::setbase(8) << finish << L" Octal )\n";
  std::wcout << L"# Numbers in a line: " << std::setbase(10) << width << std::endl;
  std::wcout << L"#\n";
  std::wcout << L"####################################\n";
  numgen(start, finish, size);
  std::wcout << L"# -- End of file.\n";
  return 0;
}

void numgen(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      std::wcout << message;
      std::wcout << std::setbase(16) << std::setw(4) << std::setfill(L'0') << num;  /* Number base format */
      std::wcout << separator;
      num++;
    }
    std::wcout <<  message;
    std::wcout << std::setbase(16) << std::setw(4) << std::setfill(L'0') << num << std::endl;  /* Number base format */
  }
}

