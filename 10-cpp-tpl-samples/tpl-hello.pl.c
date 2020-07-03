/*
####################################
#
# --- MAKE-C-TPL-0001.C ---
#
# This file named hello.pl has been
# converted to a C Template file.
#
####################################
*/

/*
===========================================================
----- hello.pl -----

Written in ISO/IEC 9899:2011 standard C
===========================================================
*/

/* ----- Header files ----- */
#include <stdio.h>
#include <stdlib.h>

/* ----- Typedefs, structs and unions ----- */

/* ----- Function Prototypes ----- */

/* ----- Global variables ----- */

/* ----- Program starts here ----- */
int main(int argc, char *argv[])
{
  printf("#!/usr/bin/perl -w\n");
  printf("#\n");
  printf("use strict;\n");
  printf("use warnings;\n");
  printf("\n");
  printf("\n");
  printf("#program version\n");
  printf("my $VERSION=\"0.1\";\n");
  printf("\n");
  printf("#For CVS , use following line\n");
  printf("#my $VERSION=sprintf(\"%%d.%%02d\", q$Revision: 370592 $ =~ /(\\d+)\\.(\\d+)/);\n");
  printf("\n");
  printf("sub do_something {\n");
  printf("  my $text=shift;\n");
  printf("  print \"$text\\n\";\n");
  printf("}\n");
  printf("\n");
  printf("&do_something(\"Hello World\");\n");
  printf("print \"That\'s all folks for version $VERSION \\n\";\n");
  printf("\n");
  printf("__END__\n");
  printf("\n");
  printf("=head1 NAME\n");
  printf("\n");
  printf("hello_perl - short description of your program\n");
  printf("\n");
  printf("=head1 SYNOPSIS\n");
  printf("\n");
  printf(" how to use your program\n");
  printf("\n");
  printf("=head1 DESCRIPTION\n");
  printf("\n");
  printf(" long description of your program\n");
  printf("\n");
  printf("=head1 SEE ALSO\n");
  printf("\n");
  printf(" need to know things before somebody uses your program\n");
  printf("\n");
  printf("=head1 AUTHOR\n");
  printf("\n");
  printf(" Kevin Leake\n");
  printf("\n");
  printf("=cut\n");
  printf("\n");

  return 0;
}

