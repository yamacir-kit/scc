#include <stdio.h>

void help(void)
{
  puts("help!\n");
}

void version(void)
{
  puts("0.0.0\n");
}

typedef struct
{
  void (*help)(void);
  void (*version)(void);

  char **operands;
} config_t;

void configure(config_t *config, int argc, char **argv)
{
  for (int i = 1; i < argc; ++i)
  {
    printf("[%d] %s\n", i, argv[i]);

    if (argv[i][0] == '-') // IEEE Std 1003.1-2001
    {
      switch (argv[i][1])
      {
      case 'c':
        break;

      case 'D':
        break;

      case 'E':
        break;

      case 'g':
        break;

      case 'I':
        break;

      case 'L':
        break;

      case 'l':
        break;

      case 'O':
        break;

      case 'o':
        break;

      case 's':
        break;

      case 'U':
        break;
      }
    }
    else
    {
    }
  }
}

int main(int argc, char **argv)
{
  config_t config =
  {
    .help = NULL,
    .version = NULL,
  };

  configure(&config, argc, argv);

  if (config.help)
  {
  }

  if (config.version)
  {
  }

  if (!config.operands)
  {
    // ERROR
  }

  return 0;
}

