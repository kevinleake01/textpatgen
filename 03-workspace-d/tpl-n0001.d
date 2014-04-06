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

module tpl_n0001;
import std.stdio, std.format, std.string;

int num, start, finish;
int width, size;
string message="X-";  /* Message text */
string separator=" ";  /* Separator text */

void main(string[] args)
{
  start=0;  /* Start number */
  finish=255; /* Finish number */
  width=16;  /* Numbers in a line */

  writef("####################################\n");
  writef("#\n");
  writef("# -- TEXTPATGEN GENERATED FILE --\n");
  writef("# -- D VERSION --\n");
  writef("#\n");
  writef("# Start number: %d ( 0x%X Hex, 0%o Octal )\n",start,start,start);
  writef("# Finish number: %d ( 0x%X Hex, 0%o Octal )\n",finish,finish,finish);
  writef("# Numbers in a line: %d\n",width);
  writef("#\n");
  writef("####################################\n");
  numgen(start, finish, size);
  writef("# -- End of file.\n");
}

void numgen(int start, int finish, int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      writef("%s", message);
      writef("%04X", num);  /* Number base format */
      writef("%s", separator);
      num++;
    }
    writef("%s", message);
    writef("%04X\n", num);  /* Number base format */
  }
}

