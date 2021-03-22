#include <iostream>
#include "teacher.h"

int main()
{
	Teacher t = Teacher(32, "Kuba", 20000);

	std::cout << t.age << " " << t.salary;
	/* code */
	return 0;
}
