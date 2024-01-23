// School Management System Library
#ifndef _smslibrary_h
#define _smslibrary_h
struct IStudent
{
  char firstname[20];
  char lastname[30];
  char middlename[20];
};

void getStudentFullName(struct IStudent *student);
void addStudent(struct IStudent *student);

#endif