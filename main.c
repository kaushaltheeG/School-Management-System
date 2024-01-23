#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sms_library/smslibrary.h"
#include "utils/utils.h"

int main () {
  // have a while loop running unles user exits program
  clearterminal();
  int runprogram = 1;
  char userinput[20];
  while (runprogram == 1) {
    print("Welcome the School Managment System");
    print("How many we asist you?");
    print("Add Student | Exit");
    scanf("%19s", userinput);

    if (strcmp(userinput, "add") == 0)
    {
      // need to compile sms with main; gcc main.c smslibrary.c - o desinationfilename
      addStudent();
    }

    // Example: Exit the loop if the user types "exit"
    if (strcmp(userinput, "exit") == 0)
    {
      runprogram = 0;
    }
  }
  return 0;
}
