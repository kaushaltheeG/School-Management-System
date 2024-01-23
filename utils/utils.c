#include <stdio.h>
#include "utils.h"
#include <stdlib.h>
#include <stdarg.h>

void print(const char *msg, ...)
{
  // va_list handles interpolation & appends the new line
  va_list args;
  va_start(args, msg);
  vprintf(msg, args);
  va_end(args);
  printf("\n");
}

void clearterminal()
{
// Clear the terminal based on the operating system
#ifdef _WIN32
  system("cls"); // For Windows
#else
  system("clear"); // For Unix/Linux
#endif
}

void clearTerminalLines(int numLines)
{
  // Move cursor up `numLines` lines and clear each line
  for (int i = 0; i < numLines; ++i)
  {
    printf("\033[1A\033[K");
  }
}
