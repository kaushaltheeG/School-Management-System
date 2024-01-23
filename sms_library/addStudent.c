#include <stdio.h>
#include "smslibrary.h"
#include "../utils/utils.h"
#include <string.h>

/*
  Add roll number(unique id), first name, courses
*/
void addStudent(struct IStudent *student) 
{
  clearterminal();
  getStudentFullName(student);

}

void getStudentFullName(struct IStudent *student)
{
  char confirm[4];
  print("Enter Student's Full Name");
  while (1)
  {
    print("First Name: ");
    scanf("%19s", student ->firstname);
    clearTerminalLines(2);
    print("First Name: %s", student ->firstname);

    print("Last Name: ");
    scanf("%29s", student ->lastname);
    clearTerminalLines(2);
    print("Last Name: %s", student->lastname);

    print("Middle Name: ");
    scanf("%29s", student->middlename);
    clearTerminalLines(2);
    print("Middle Name: %s", student->middlename);

    print("Confirm Full Name: %s %s %s", student->firstname, student->middlename, student->lastname);
    print("Type 'yes' or 'no'");
    scanf("%3s", confirm);
    if (strcmp(confirm, "yes") == 0)
    {
      break;
    }
    clearterminal();
  }
  return;
}
