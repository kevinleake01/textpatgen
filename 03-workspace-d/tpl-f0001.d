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

module tpl_f0001;
import std.stdio, std.format, std.string;

int num, start, finish;
int width, size;
string message="X-";  /* Message text */
string separator=" ";  /* Separator text */
File fp;

void main()
{
  start=0;  /* Start number */
  finish=255; /* Finish number */
  width=16;  /* Numbers in a line */

  fp=File("edit-01.txt","w");  /* Open file for writing */
  fp.writef("####################################\n");
  fp.writef("#\n");
  fp.writef("# -- TEXTPATGEN GENERATED FILE --\n");
  fp.writef("# -- D VERSION --\n");
  fp.writef("#\n");
  fp.writef("# Start number: %d ( 0x%X Hex, 0%o Octal )\n",start,start,start);
  fp.writef("# Finish number: %d ( 0x%X Hex, 0%o Octal )\n",finish,finish,finish);
  fp.writef("# Numbers in a line: %d\n",width);
  fp.writef("#\n");
  fp.writef("####################################\n");
  numgen(start, finish, size);
  fp.writef("# -- End of file.\n");
  fp.close();

}

void numgen(int start, int finish, int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      fp.writef("%s", message);
      fp.writef("%04X", num);  /* Number base format */
      fp.writef("%s", separator);
      num++;
    }
    fp.writef("%s", message);
    fp.writef("%04X\n", num);  /* Number base format */
  }
}

