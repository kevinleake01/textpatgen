/*
####################################
#
# --- MAKE-TPL-001.C ---
#
# This converts a standard text file
# into an Textpatgen C Template file.
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);

int c; /* Character */ 
FILE *fp;  /* File pointer */

int main(int argc, char *argv[])
{
  fp=fopen(argv[1],"r"); /* Open file */
  
  printf("/*\n");
  printf("####################################\n");
  printf("#\n");
  printf("# --- MAKE-TPL-001.C ---\n");
  printf("#\n");
  printf("# This file named %s has\n",argv[1]);
  printf("# been converted to an Textpatgen C\n");
  printf("# Template file.\n");
  printf("#\n");
  printf("####################################\n");
  printf("*/\n\n");
  printf("#include <stdio.h>\n\n");
  printf("/* --- Function Prototypes go here --- */\n");
  printf("int main(int argc, char *argv[]);\n\n");
  printf("/* --- Global variables go here --- */\n\n");
  printf("int main(int argc, char *argv[])\n");
  printf("{\n");
  printf("  printf(\""); /* Open first printf statement */

  while (c != EOF) /* Loop until the end of the file */
  {  
    c=fgetc(fp); /* Get a character from the file */
    if (c == '\\') /* Backslash */
    { 
      printf("\\\\");
    }
    else if (c == '%') /* Percent sign */
    {
      printf("%%%%");
    }
    else if (c == '\'') /* Single quote */
    {
      printf("\\\'");
    }
    else if (c == '\"') /* Double quotes */
    {
      printf("\\\"");
    }
    else if (c == '\?') /* Question mark */
    {
      printf("\\?");
    }
    else if (c == '\t') /* Tabs */
    {
      printf("\\t");
    }
    else if (c == '\f') /* Form feeds */
    {
      printf("\\f");
    }
    else if (c == '\a') /* Bell */
    {
      printf("\\a");
    }
    else if (c == '\b') /* Backspace */
    {
      printf("\\b");
    }
    else if (c == '\v') /* Vertical tabs */
    {
      printf("\\v");
    }
    else if (c >= 127) /* Characters 127 to 255 */
    {
      printf("\\x%02X", c);
    }
    else if (c == '\n') /* Newline */
    {
      printf("\\n\");\n"); /* Close printf statement */
      printf("  printf(\""); /* Open next printf statement */

    }
    else if (c == EOF) /* End of file */
    {
      printf("\\n\");\n"); /* Close final printf statement and exit */
      break;
    }
    else putchar(c);
  }
  printf("}\n\n");
  fclose(fp);
}
