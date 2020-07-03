/*
####################################
#
# --- MAKE-C-TPL-0002.C ---
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int c; /* Character */ 
  FILE *fp;  /* File pointer */

  fp=fopen(argv[1],"r"); /* Open file */

  printf("/*\n");
  printf("####################################\n");
  printf("#\n");
  printf("# --- MAKE-C-TPL-0002.C ---\n");
  printf("#\n");
  printf("# This file named %s has been\n", argv[1]);
  printf("# converted to a C Template file.\n");
  printf("#\n");
  printf("#\n");
  printf("# The text is written to a named file.\n");
  printf("#\n");
  printf("####################################\n");
  printf("*/\n\n");
  printf("/*\n");
  printf("===========================================================\n");
  printf("----- %s -----\n" ,argv[1]);
  printf("\n");
  printf("Written in ISO/IEC 9899:2011 standard C\n");
  printf("===========================================================\n");
  printf("*/\n");
  printf("\n");
  printf("/* ----- Header files ----- */\n");
  printf("#include <stdio.h>\n");
  printf("#include <stdlib.h>\n\n");
  printf("/* ----- Typedefs, structs and unions ----- */\n\n");
  printf("/* ----- Function Prototypes ----- */\n\n");
  printf("/* ----- Global variables ----- */\n\n");
  printf("/* ----- Program starts here ----- */\n");
  printf("int main(int argc, char *argv[])\n");
  printf("{\n");
  printf("  FILE *fp\n");
  printf("  fp=fopen(\"file0002.txt\",\"w\"); /* Open file for writing */\n");
  printf("\n");
  printf("  fprintf(fp,\""); /* Open first fprintf statement */

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
      printf("  fprintf(fp,\""); /* Open next fprintf statement */
    }
    else if (c == EOF) /* End of file */
    {
      printf("\\n\");\n"); /* Close final fprintf statement and exit */
      printf("  fclose(fp); /* Close file */\n\n");
      break;
    }
    else putchar(c);
  }
  printf("  return 0;\n");
  printf("}\n\n");
  fclose(fp);

  return 0;
}
