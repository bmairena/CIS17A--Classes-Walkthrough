#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
	Student bob = Student("bob");
	cout << bob.GetName() << endl;
	
	
	return 0;
}