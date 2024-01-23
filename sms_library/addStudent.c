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
  // generate random id
  // user adds student's course based on course catalog "db"

}

void getStudentFullName(struct IStudent *student)
{
  char confirm[4];
  print("Enter Student's Full Name");
  while (1)
  {
    inlineInput("First Name", "%19s", student->firstname);
    inlineInput("Last Name", "%29s", student->lastname);
    inlineInput("Middle Name", "%29s", student->middlename);

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
