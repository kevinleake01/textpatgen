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

module tpl_f0002;
import std.stdio, std.conv, std.string, std.format;

int num, start, finish;
File fp;

void main()
{
  start=1;  /* Start line */
  finish=25;  /* Finish line */

  fp=File("edit-02.txt","w");
  fp.writef("####################################\n");
  fp.writef("#\n");
  fp.writef("# -- TEXTPATGEN GENERATED FILE --\n");
  fp.writef("# -- D VERSION --\n");
  fp.writef("#\n");
  fp.writef("# Start number: %d ( 0x%X Hex, 0%o Octal )\n",start,start,start);
  fp.writef("# Finish number: %d ( 0x%X Hex, 0%o Octal )\n",finish,finish,finish);
  fp.writef("#\n");
  fp.writef("####################################\n");
  for (num=start; num<=finish; num++)
  { /* Line of text starts here */
    fp.writef("%02d The Quick Brown Fox Jumps Over The Lazy Dog.\n", num);
  } /* Line of text ends here */
  fp.writef("# -- End of file.\n");
  fp.close();
}

