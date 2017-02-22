#include <iostream>
#include "Teacher.h"
#include "Student.h"
using namespace std;

int main()
{
	Teacher james = Teacher("james");
	Teacher bob = Teacher("bob");
	cout << james.GetName() << endl;
	cout << bob.GetName() << endl;

	getchar();
	return 0;
}