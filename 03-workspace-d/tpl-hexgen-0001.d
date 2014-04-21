/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-hexgen-0001.d 0 255 16
#
####################################
*/

module tpl_hexgen_0001;
import std.stdio, std.conv, std.string, std.format;

int num, start, finish;
int width, size;
string message ="X-";  /* Message text */
string separator =" ";  /* Separator text */

void main(string[] args)
{
  start=to!int(args[1]);
  finish=to!int(args[2]);
  width=to!int(args[3]);

  writef("####################################\n");
  writef("#\n");
  writef("# -- TEXTPATGEN GENERATED FILE --\n");
  writef("#\n");
  writef("# -- A generated text file created from:\n");
  writef("# -- tpl-hexgen-0001.d\n");
  writef("#\n");
  writef("# Start number: %d ( 0x%X Hex, 0%o Octal )\n",start,start,start);
  writef("# Finish number: %d ( 0x%X Hex, 0%o Octal )\n",finish,finish,finish);
  writef("# Numbers in a line: %d\n",width);
  writef("#\n");
  writef("####################################\n");
  hexgen(start, finish, size);
  writef("# -- End of file.\n");
}

void hexgen(int start, int finish, int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      writef("%s", message);
      writef("%04X", num);
      writef("%s", separator);
      num++;
    }
    writef("%s", message);
    writef("%04X\n", num);
  }
}

