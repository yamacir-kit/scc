#include <stdio.h>

void parse_args(int argc, char** argv)
{
  for (int i = 0; i < argc; ++i)
  {
    printf("[%d] %s\n", i, argv[i]);
  }
}

int main(int argc, char** argv)
{
  printf("hello, world!\n");
  parse_args(argc, argv);

  return 0;
}

