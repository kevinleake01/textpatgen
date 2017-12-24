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

  int num, length;
  ofstream outfile;

  /* Timestamp info */
  time_t timer;
  char buffer1[32], buffer2[32];
  struct tm* tm_info;

  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "%Y-%m-%dT%H:%M:%S%z", tm_info); /* Timestamp to print */
  std::strftime(buffer2, 32, "00_%Y%m%d_%H%M%S.txt", tm_info); /* Timestamp for filename */

  outfile.open(buffer2, ios_base::out);  /* Open file for writing */
  outfile.setf(ios_base::uppercase);  /* Use uppercase for Hex numbers */
  outfile << "####################################\n";
  outfile << "#\n";
  outfile << "# -- TEXTPATGEN GENERATED FILE --\n";
  outfile << "# -- C++ VERSION --\n";
  outfile << "#\n";
  outfile << "# -- " << buffer1 << " --\n";
  outfile << "#\n";
  outfile << "####################################\n";
  num=0;
  for (length=0; length<25; length++)
  {
    outfile << "X-";
    outfile << setbase(16) << setw(4) << setfill('0') << num;
    outfile << ":The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog:";
    outfile << "D-";
    outfile << setbase(10) << setw(4) << setfill('0') << num << endl;
    num++;
  }
  outfile << "# -- End of file.\n";
  outfile.close();
  return 0;
}

