// Basic addition to show how assembler works
// Author: David Kerschbaumer


// compile this to assembler using "clang -S 02-code.c -o 02-code.s"

int main()
{
  int a = 10;
  int b = 15;
  int c;
  c = a + b;

  return 0;
}