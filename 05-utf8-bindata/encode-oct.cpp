/*
####################################
#
# --- ENCODE-OCT.C++ ---
#
####################################
*/

#include <cstdio>

using namespace std;

int main(int argc, char *argv[]);
void gendata(long int start, long int finish, long int size);

long int start, finish, size, num, width;
FILE *fp;
int c;

int main(int argc, char *argv[])
{
  fp=std::fopen(argv[1], "rb"); /* Open the file */
  finish=std::atol(argv[2]);  /* Number of bytes to read */
  width=std::atol(argv[3]);  /* Number of bytes in a line */
  start=0;
  num=0;

  std::printf("/*\n");
  std::printf("####################################\n");
  std::printf("#\n");
  std::printf("# --- UTF-8 BINDATA ENCODED FILE ---\n");
  std::printf("# --- C++ VERSION\n");
  std::printf("#\n");
  std::printf("# Filename: %s\n", argv[1]);
  std::printf("# Number of bytes read: %s\n", argv[2]);
  std::printf("# Number of bytes in a line: %s\n", argv[3]);
  std::printf("#\n");
  std::printf("# To decode this file back to its original\n");
  std::printf("# state, use this command:\n");
  std::printf("#\n");
  std::printf("# g++ <this_filename>; ./a.out %s %s\n", argv[1], argv[2]);
  std::printf("#\n");
  std::printf("####################################\n");
  std::printf("*/\n");
  std::printf("\n");
  std::printf("#include <cstdio>\n");
  std::printf("#include <cstdlib>\n");
  std::printf("\nusing namespace std;\n\n");
  std::printf("int main(int argc, char *argv[]);\n");
  std::printf("\n");
  std::printf("long int num;\n");
  std::printf("FILE *fp;\n");
  std::printf("char filedata[] = {\n");
  gendata(start, finish, size);
  std::printf("0 };\n");
  std::printf("\n");
  std::printf("\n");
  std::printf("int main(int argc, char *argv[])\n");
  std::printf("{\n");
  std::printf("  fp=std::fopen(argv[1], \"wb\");  /* Open file */\n");
  std::printf("  num=std::atol(argv[2]); /* Get the number of bytes to write */\n");
  std::printf("  std::fwrite(&filedata[0], num, 1, fp);  /* Save the data in binary format */\n");
  std::printf("  std::fclose(fp);\n");
  std::printf("}\n");
  std::printf("\n");
  std::fclose(fp);
  return 0;
}

void gendata(long int start, long int finish, long int size)
{
  for (num=start; num<=finish; num++)
  {
    for (size=0; size<width-1; size++)
    {
      c=std::fgetc(fp);  /* Read a byte */
      if (num == finish) break;
      std::printf("0%03o, ", c);  /* Print out the data */
      num++;
    }
    c=std::fgetc(fp);
    std::printf("0%03o,\n", c);
  }
}

