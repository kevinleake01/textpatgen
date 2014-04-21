/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-chksum-0001.d 256 16 "+"
#
####################################
*/

module tpl_chksum_0001;
import std.stdio, std.conv, std.string, std.format;

int num, finish;
int width, size;
string message;

void main(string[] args)
{
  finish=to!int(args[1]);
  width=to!int(args[2]);
  message=to!string(args[3].dup);

  writef("####################################\n");
  writef("#\n");
  writef("# -- TEXTPATGEN GENERATED FILE --\n");
  writef("#\n");
  writef("# -- A generated text file created from:\n");
  writef("# -- tpl-chksum-0001.d\n");
  writef("#\n");
  writef("# -- This file can be very useful in\n");
  writef("# -- transmission tests.\n");
  writef("#\n");
  writef("# Total number: %d\n",finish);
  writef("# Number in a line: %d\n",width);
  writef("# Text: \"%s\"\n",message);
  writef("#\n");
  writef("####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      writef("%s", message);
      num++;
    }
    writef("%s\n", message);
  }
}

