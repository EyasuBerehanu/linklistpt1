#include <iostream>
#include <cstring>  
#include "student.h"
using namespace std;

Student::Student(){
  
  name = new char[80];
  id = 0;
  gpa = 0.0;
  
}

Student::~Student(){
  delete[] name;
}

Student::Student(char* newName, int newID, float newGPA) {
  name = new char[80];
  strcpy(name, newName);
  id = newID;
  gpa = newGPA;
}

char* Student::getName() {
 return name; 
}

int Student::getID() {
  return id;
}

double Student::getGPA() {
  return gpa;
}
