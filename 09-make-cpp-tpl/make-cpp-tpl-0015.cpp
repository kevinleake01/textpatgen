
/*
####################################
#
# --- MAKE-CPP-TPL-0015 C++ ---
#
####################################
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
  int c; /* Character */ 
  FILE *fp;  /* File pointer */

  fp=std::fopen(argv[1],"r"); /* Open file */

  std::printf("/*\n");
  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# --- MAKE-CPP-TPL-0015 C++ ---\n");
  std::printf("#\n");
  std::printf("# This file named %s has been\n", argv[1]);
  std::printf("# converted to a C++ Template file.\n");
  std::printf("#\n");
  std::printf("# The text is written to a named file.\n");
  std::printf("#\n");
  std::printf("####################################\n");
  std::printf("*/\n\n");
  std::printf("/*\n");
  std::printf("===========================================================\n");
  std::printf("----- %s -----\n", argv[1]);
  std::printf("\n");
  std::printf("Written in ISO/IEC 14882:2011 standard C++\n");
  std::printf("===========================================================\n");
  std::printf("*/\n");
  std::printf("\n");
  std::printf("// ----- Header files -----\n");
  std::printf("#include <iostream>\n");
  std::printf("#include <fstream>\n");
  std::printf("#include <cstdlib>\n\n");
  std::printf("// ----- Namespace declarations -----\n");
  std::printf("using namespace std;\n\n");
  std::printf("// ----- Typedefs, structs and unions -----\n\n");
  std::printf("// ----- Function prototypes -----\n\n");
  std::printf("// ----- Global variables -----\n\n");
  std::printf("// ----- Classes -----\n\n");
  std::printf("// ----- Program starts here -----\n");
  std::printf("int main(int argc, char *argv[])\n");
  std::printf("{\n");
  std::printf("\tofstream outfile;\n");
  std::printf("\toutfile.open(\"file0015.txt\", ios_base::out);  /* Open file for writing */\n");
  std::printf("\toutfile << \""); // Open first outfile statement

  while (c != EOF) // Loop until the end of the file
  {
    c=std::fgetc(fp); // Get a character from the file
    if (c == '\\') // Backslash
    {
      std::printf("\\\\");
    }
    else if (c == '\'') // Single quote
    {
      std::printf("\\\'");
    }
    else if (c == '\"') // Double quotes
    {
      std::printf("\\\"");
    }
    else if (c == '\?') // Question mark
    {
      std::printf("\\?");
    }
    else if (c == '\t') // Tabs
    {
      std::printf("\\t");
    }
    else if (c == '\f') // Form feeds
    {
      std::printf("\\f");
    }
    else if (c == '\a') // Bell
    {
      std::printf("\\a");
    }
    else if (c == '\b') // Backspace
    {
      std::printf("\\b");
    }
    else if (c == '\v') // Vertical tabs
    {
      std::printf("\\v");
    }
    else if (c >= 127) // Characters 127 to 255
    {
      std::printf("\\x%02X", c);
    }
    else if (c == '\n') // Newline
    {
      std::printf("\" << endl;\n"); // End of line reached
      std::printf("\toutfile << \""); // Open next outfile statement
    }
    else if (c == EOF) // End of file
    {
      std::printf("\" << endl;\n"); // Final end of line reached
      std::printf("\toutfile.close();  /* Close file */\n\n");
      break;
    }
    else std::putchar(c);
  }
  std::printf("\treturn 0;\n");
  std::printf("}\n\n");
  std::fclose(fp);

  return 0;
}
