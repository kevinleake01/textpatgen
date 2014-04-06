/*
####################################
#
# -- TEXTPATGEN TEMPLATE --
#
# Users can change the output by editing
# this file directly.
#
####################################
*/

module tpl_t0001;
import std.stdio, std.conv, std.string, std.format;

int num, start, finish;

void main(string[] args)
{
  start=1;  /* Start line */
  finish=25;  /* Finish line */
 
  writef("####################################\n");
  writef("#\n");
  writef("# -- TEXTPATGEN GENERATED FILE --\n");
  writef("# -- D VERSION --\n");
  writef("#\n");
  writef("# Start number: %d ( 0x%X Hex, 0%o Octal )\n",start,start,start);
  writef("# Finish number: %d ( 0x%X Hex, 0%o Octal )\n",finish,finish,finish);
  writef("#\n");
  writef("####################################\n");
  for (num=start; num<=finish; num++)
  { /* Line of text starts here */
    writef("%02d The Quick Brown Fox Jumps Over The Lazy Dog.\n", num);
  } /* Line of text ends here */
  writef("# -- End of file.\n");
}

