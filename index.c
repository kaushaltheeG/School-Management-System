#include <stdio.h>
#include <string.h>
#include <smslibrary.h>

void print(char* msg) 
{
  printf("%s\n", msg);
}


int main () 
{
  // have a while loop running unles user exits program
  int runprogram = 1;
  char userinput[20];
  while (runprogram == 1) {
    print("Welcome the School Managment System");
    print("How many we asist you?");
    print("Add Student | Exit");
    scanf("%19s", userinput);

    if (strcmp(userinput, "add") == 0)
    {
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
