#include <stdio.h>
#include <string.h>
#include "sms_library/smslibrary.h"
#include "utils/utils.h"

int main () 
{
  // have a while loop running unles user exits program
  clearterminal();
  char userinput[20];

  print("Welcome the School Managment System");
  print("How many we asist you?");
  while (1) {
    print("Add Student | Exit");
    scanf("%19s", userinput);

    if (strcmp(userinput, "add") == 0)
    {
      struct IStudent student;
      addStudent(&student);
    }

    // Example: Exit the loop if the user types "exit"
    if (strcmp(userinput, "exit") == 0)
    {
      break;
    }
  }
  return 0;
}
