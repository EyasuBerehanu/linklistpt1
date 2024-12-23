#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
  char* name;
  int id;
  float gpa;
  
public:
  Student();
  ~Student(); //destructor for student
  Student(char* name, int id, float gpa); //Passes in name, id, and GPA

  
  char* getName(); //use to get the name
  int getID();  //use to get the id
  double getGPA(); //use to get the gpa
  

};

#endif
