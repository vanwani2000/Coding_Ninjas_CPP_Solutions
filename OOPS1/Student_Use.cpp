#include "OOPS_Basics_Syntax.cpp"
#include <iostream>

using namespace std;

int main() {
  // Create object statically
  Student s1;
  Student s2;

  Student s3, s4, s5;

  Student *s6 = new Student;

  s1.age = 24;
  s1.rollNumber = 101;

  cout << s1.age << endl;
  cout << s1.rollNumber << endl;

  (*s6).age = 23;
  (*s6).rollNumber = 104;

  // Another way of allocating values to an object
  // s6->age = 23;
  // s6->rollNumber = 104;
}
