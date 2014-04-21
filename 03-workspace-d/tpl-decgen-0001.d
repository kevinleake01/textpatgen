/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-decgen-0001.d 0 99 10
#
####################################
*/

module tpl_decgen_0001;
import std.stdio, std.conv, std.string, std.format;

int num, start, finish;
int width, size;
string message ="D-";  /* Message text */
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
  writef("# -- tpl-decgen-0001.d\n");
  writef("#\n");
  writef("# Start number: %d ( 0x%X Hex, 0%o Octal )\n",start,start,start);
  writef("# Finish number: %d ( 0x%X Hex, 0%o Octal )\n",finish,finish,finish);
  writef("# Numbers in a line: %d\n",width);
  writef("#\n");
  writef("####################################\n");
  decgen(start, finish, size);
  writef("# -- End of file.\n");
}

void decgen(int start, int finish, int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      writef("%s", message);
      writef("%04d", num);
      writef("%s", separator);
      num++;
    }
    writef("%s", message);
    writef("%04d\n", num);
  }
}

