/*
####################################
#
# --- MAKE-TPL-002 C++ ---
#
# This converts a standard text file
# into a Textpatgen C++ Template file.
#
####################################
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]);

int c; /* Character */ 
FILE *fp;  /* File pointer */

int main(int argc, char *argv[])
{
  fp=std::fopen(argv[1],"r"); /* Open file */
  
  std::printf("/*\n");
  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# --- MAKE-TPL-002 C++ ---\n");
  std::printf("#\n");
  std::printf("# This file named %s has been\n",argv[1]);
  std::printf("# converted to a Textpatgen C++\n");
  std::printf("# Template file.\n");
  std::printf("#\n");
  std::printf("# This version uses wchar_t which is\n");
  std::printf("# more suitable for Unicode.\n");
  std::printf("#\n");
  std::printf("####################################\n");
  std::printf("*/\n\n");
  std::printf("#include <iostream>\n\n");
  std::printf("using namespace std;\n\n");
  std::printf("// --- Function Prototypes go here ---\n");
  std::printf("int main(int argc, char *argv[]);\n\n");
  std::printf("// --- Global variables go here ---\n\n");
  std::printf("int main(int argc, char *argv[])\n");
  std::printf("{\n");
  std::printf("  std::wcout << L\""); // Open first std::wcout statement

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
      std::printf("\" << std::endl;\n"); // End of line reached
      std::printf("  std::wcout << L\""); // Open next std::wcout statement

    }
    else if (c == EOF) // End of file
    {
      std::printf("\" << std::endl;\n"); // Final end of line reached
      break;
    }
    else std::putchar(c);  
  }
  std::printf("}\n\n");
  std::fclose(fp);
  return 0;
}
