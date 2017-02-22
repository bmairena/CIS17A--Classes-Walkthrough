#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include "Course.h"
using namespace std;

int main()

{
	Teacher james = Teacher("james");

	Course cis17 = Course("Cis17","progamming", james);
	Student bob = Student("bob");
	Student jane = Student("jane");

	cis17.enrollStudent(bob, 0);
	cis17.enrollStudent(jane, 1);


	getchar();
	return 0;
}