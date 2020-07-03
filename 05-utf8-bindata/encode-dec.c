/*
####################################
#
# --- ENCODE-DEC.C ---
#
####################################
*/

#include <stdio.h>

int main(int argc, char *argv[]);
void gendata(long int start, long int finish, long int size);

long int start, finish, size, num, width;
FILE *fp;
int c;

int main(int argc, char *argv[])
{
  fp=fopen(argv[1], "rb"); /* Open the file */
  finish=atol(argv[2]);  /* Number of bytes to read */
  width=atol(argv[3]);  /* Number of bytes in a line */
  start=0;
  num=0;

  printf("/*\n");
  printf("####################################\n");
  printf("#\n");
  printf("# --- UTF-8 BINDATA ENCODED FILE ---\n");
  printf("#\n");
  printf("# Filename: %s\n", argv[1]);
  printf("# Number of bytes read: %s\n", argv[2]);
  printf("# Number of bytes in a line: %s\n", argv[3]);
  printf("#\n");
  printf("# To decode this file back to its original\n");
  printf("# state, use this command:\n");
  printf("#\n");
  printf("# gcc <this_filename>; ./a.out %s %s\n", argv[1], argv[2]);
  printf("#\n");
  printf("####################################\n");
  printf("*/\n");
  printf("\n");
  printf("#include <stdio.h>\n");
  printf("#include <stdlib.h>\n");
  printf("\n");
  printf("int main(int argc, char *argv[]);\n");
  printf("\n");
  printf("long int num;\n");
  printf("FILE *fp;\n");
  printf("char filedata[] = {\n");
  gendata(start, finish, size);
  printf("0 };\n");
  printf("\n");
  printf("\n");
  printf("int main(int argc, char *argv[])\n");
  printf("{\n");
  printf("  fp=fopen(argv[1], \"wb\");  /* Open file */\n");
  printf("  num=atol(argv[2]); /* Get the number of bytes to write */\n");
  printf("  fwrite(&filedata[0], num, 1, fp);  /* Save the data in binary format */\n");
  printf("  fclose(fp);\n");
  printf("}\n");
  printf("\n");
  fclose(fp);
  return 0;
}

void gendata(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      c=fgetc(fp);  /* Read a byte */
      if (num == finish) break;
      printf("%d, ", c);  /* Print out the data */
      num++;
    }
    c=fgetc(fp);
    printf("%d,\n", c);
  }
}

