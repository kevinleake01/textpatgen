/*
####################################
#
# -- TEXTPATGEN GENDATA TEMPLATE --
#
# Example usage:
# tpl-gendata-0006.d 255 16 0 255 100
#
####################################
*/

module tpl_gendata_0006;
import std.stdio, std.conv, std.string, std.format, std.random;

int num, finish, width, size, randnum, randmin, randmax, randseed;

void main(string[] args)
{
  finish=to!int(args[1]);
  width=to!int(args[2]);
  randmin=to!int(args[3]);
  randmax=to!int(args[4]);
  randseed=to!int(args[5]);

  auto gen=Random(randseed);

  writef("####################################\n");
  writef("#\n");
  writef("# -- TEXTPATGEN GENERATED RANDOM DATA --\n");
  writef("#\n");
  writef("# -- A generated random data file created from:\n");
  writef("# -- tpl-gendata-0006.d\n");
  writef("#\n");
  writef("# Total number: %d\n",finish);
  writef("# Number in a line: %d\n",width);
  writef("# Lowest printable number: %d\n",randmin);
  writef("# Highest printable number: %d\n",randmax);
  writef("# Random number seed: %d\n",randseed);
  writef("#\n");
  writef("####################################\n");

  for (num=1; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      if (num == finish) break;
      randnum=uniform(randmin, randmax, gen);  /* Get the random number */
      writef("%02x ", randnum);  /* Print this number */
      num++;
    }
    randnum=uniform(randmin, randmax, gen);  /* Get the random number */
    writef("%02x\n", randnum);  /* Print this number */
  }
}



