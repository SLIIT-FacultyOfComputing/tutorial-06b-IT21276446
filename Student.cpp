#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char n1[20]) {
  studentId = id;
  strcpy(name,n1);
}

// Display StudentId and Name
void Student::display() {
  cout<< studentId <<" "<< name << endl;
}
