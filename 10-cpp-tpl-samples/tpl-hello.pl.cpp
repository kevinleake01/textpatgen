/*
####################################
#
# --- MAKE-CPP-TPL-0001 C++ ---
#
# This file named hello.pl has been
# converted to a C++ Template
# file.
#
####################################
*/

/*
===========================================================
----- hello.pl -----

Written in ISO/IEC 14882:2011 standard C++
===========================================================
*/

// ----- Header files -----
#include <iostream>
#include <cstdlib>

// ----- Namespace declarations -----
using namespace std;

// ----- Typedefs, structs and unions -----

// ----- Function prototypes -----

// ----- Global variables -----

// ----- Classes -----

// ----- Program starts here -----
int main(int argc, char *argv[])
{
  std::cout << "#!/usr/bin/perl -w" << std::endl;
  std::cout << "#" << std::endl;
  std::cout << "use strict;" << std::endl;
  std::cout << "use warnings;" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "#program version" << std::endl;
  std::cout << "my $VERSION=\"0.1\";" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "#For CVS , use following line" << std::endl;
  std::cout << "#my $VERSION=sprintf(\"%d.%02d\", q$Revision: 370592 $ =~ /(\\d+)\\.(\\d+)/);" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "sub do_something {" << std::endl;
  std::cout << "  my $text=shift;" << std::endl;
  std::cout << "  print \"$text\\n\";" << std::endl;
  std::cout << "}" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "&do_something(\"Hello World\");" << std::endl;
  std::cout << "print \"That\'s all folks for version $VERSION \\n\";" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "__END__" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "=head1 NAME" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "hello_perl - short description of your program" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "=head1 SYNOPSIS" << std::endl;
  std::cout << "" << std::endl;
  std::cout << " how to use your program" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "=head1 DESCRIPTION" << std::endl;
  std::cout << "" << std::endl;
  std::cout << " long description of your program" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "=head1 SEE ALSO" << std::endl;
  std::cout << "" << std::endl;
  std::cout << " need to know things before somebody uses your program" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "=head1 AUTHOR" << std::endl;
  std::cout << "" << std::endl;
  std::cout << " Kevin Leake" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "=cut" << std::endl;
  std::cout << "" << std::endl;

  return 0;
}

