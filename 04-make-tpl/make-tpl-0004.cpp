/*
####################################
#
# --- MAKE-TPL-0004 C++ ---
#
# This converts a standard text file
# into a Textpatgen C++ Template file.
#
####################################
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

int main(int argc, char *argv[]);

int c; /* Character */ 
FILE *fp;  /* File pointer */

/* Timestamp info */
time_t timer;
char buffer1[32];
struct tm* tm_info;

int main(int argc, char *argv[])
{
  std::time(&timer);  /* get the time */
  tm_info=std::localtime(&timer);

  std::strftime(buffer1, 32, "00_%s", tm_info); /* Timestamp for filename */
    
  fp=std::fopen(argv[1],"r"); /* Open file */
  
  std::printf("/*\n");
  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# --- MAKE-TPL-0004 C++ ---\n");
  std::printf("#\n");
  std::printf("# This file named %s has been\n",argv[1]);
  std::printf("# converted to a Textpatgen C++\n");
  std::printf("# Template file.\n");
  std::printf("#\n");
  std::printf("# This version uses wchar_t which is\n");
  std::printf("# more suitable for Unicode, and the\n");
  std::printf("# text is written to a named file.\n");
  std::printf("#\n");
  std::printf("####################################\n");
  std::printf("*/\n\n");
  std::printf("#include <iostream>\n");
  std::printf("#include <fstream>\n\n");
  std::printf("using namespace std;\n\n");
  std::printf("// --- Function Prototypes go here ---\n");
  std::printf("int main(int argc, char *argv[]);\n\n");
  std::printf("// --- Global variables go here ---\n\n");
  std::printf("int main(int argc, char *argv[])\n");
  std::printf("{\n");
  std::printf("  wofstream outfile;\n");
  std::printf("  outfile.open(\"%s\", ios_base::out);  /* Open file for writing */\n", buffer1);
  std::printf("  outfile << L\""); // Open first outfile statement

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
      std::printf("  outfile << L\""); // Open next outfile statement

    }
    else if (c == EOF) // End of file
    {
      std::printf("\" << std::endl;\n"); // Final end of line reached
      std::printf("  outfile.close();  /* Close file */\n");
      break;
    }
    else std::putchar(c);  
  }
  std::printf("}\n\n");
  std::fclose(fp);
  return 0;
}
