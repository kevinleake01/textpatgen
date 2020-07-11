/*
####################################
#
# --- TEXTPATGEN TEMPLATE ---
#
# Users can change the output by editing
# this file directly.
#
# The text is written to a timestamped file.
#
####################################
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{

  int num, length, width;
  ofstream outfile;

  /* Timestamp info */
  time_t timer;
  char buffer1[32], buffer2[32], buffer3[32];
  struct tm* tm_info;

  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* ISO-8601 Timestamp */
  std::strftime(buffer2, 32, "%s", tm_info); /* Epoch Timestamp */
  std::strftime(buffer3, 32, "00_%s.txt", tm_info); /* Timestamp for filename */

  outfile.open(buffer3, ios_base::out);  /* Open file for writing */
  outfile.setf(ios_base::uppercase);  /* Use uppercase for Hex numbers */
  outfile << "####################################\n";
  outfile << "#\n";
  outfile << "# -- TEXTPATGEN GENERATED FILE --\n";
  outfile << "# -- C++ VERSION --\n";
  outfile << "#\n";
  outfile << "# -- Created: " << buffer1 << "\n";
  outfile << "# -- Epoch Time: " << buffer2 << "\n";
  outfile << "#\n";
  outfile << "####################################\n";
  num=0;
  for (length=0; length<10; length++)
  {
    for (width=0; width<9; width++)
    {
      outfile << "D-";
      outfile << setbase(10) << setw(4) << setfill('0') << num;
      outfile << " ";
      num++;
    }
    outfile << "D-";
    outfile << setbase(10) << setw(4) << setfill('0') << num << endl;
    num++;
  }
  outfile << "# -- End of file.\n";
  outfile.close();
  return 0;
}

