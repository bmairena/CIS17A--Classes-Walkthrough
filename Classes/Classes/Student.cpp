#include "Student.h"
using namespace std;

Student::Student() // Constructor without parameter is the defualt constructor
{
	_name = "null";
}

Student::Student(string name)
{
	_name = name;
}


Student::~Student()
{
}

std::string Student::GetName()
{
	return _name;
}
