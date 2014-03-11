/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Example usage:
# tpl-text-001.d 0 20 "The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog"
#
####################################
*/

module tpl_text_001;
import std.stdio, std.conv, std.string, std.format;

int num, start, finish;
string message;

void main(string[] args)
{
  start=to!int(args[1]);
  finish=to!int(args[2]);
  message=to!string(args[3]);

  writef("####################################\n");
  writef("#\n");
  writef("# -- TEXTPATGEN GENERATED FILE --\n");
  writef("#\n");
  writef("# -- A generated text file from:\n");
  writef("# -- tpl-text-001.d\n");
  writef("#\n");
  writef("# Start number: %d ( 0x%X Hex, 0%o Octal )\n",start,start,start);
  writef("# Finish number: %d ( 0x%X Hex, 0%o Octal )\n",finish,finish,finish);
  writef("# Message text: \"%s\"\n",message);
  writef("#\n");
  writef("####################################\n");
  for (num=start; num<=finish; num++)
  {
    writef("X%04X:%s:D%04d\n", num, message, num);
  }
  writef("# -- End of file.\n");

}

