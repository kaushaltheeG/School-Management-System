#include <stdio.h>
#include "utils.h"
void print(char *msg)
{
  printf("%s\n", msg);
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