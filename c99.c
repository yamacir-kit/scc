#include <stdio.h>
#include <stdlib.h>

#ifndef CC
#define CC "c99"
#endif

#define error(CATEGORY, ...) \
  printf(CC ": \x1B[1;31m" CATEGORY ": \x1B[0m" __VA_ARGS__)

#define config_error(...) error("config error", __VA_ARGS__)

int help(void)
{
  puts("help!\n");

  return EXIT_SUCCESS;
}

int version(void)
{
  puts("0.0.0\n");

  return EXIT_SUCCESS;
}

typedef struct
{
  int (*help)(void);
  int (*version)(void);

  char **operands;
} config_t;

void configure(config_t *config, int argc, char **argv)
{
  for (int i = 1; i < argc; ++i)
  {
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

      case 'h':
        (*config).help = &help;
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

      case 'v':
        (*config).version = &version;
        break;

      default:
        config_error("\x1B[1;36m%s\x1B[0m is unknown option.\n", argv[i]);
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
    return (config.help)();
  }

  if (config.version)
  {
    return (config.version)();
  }

  if (!config.operands)
  {
    // ERROR
  }

  return 0;
}

