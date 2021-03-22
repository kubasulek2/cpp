#include <string>
#include "person.h"

#ifndef TEACHER_H
#define TEACHER_H

class Teacher : Person
{
public:
	int salary;
	Teacher(int age, std::string name, int salary);
};
#endif // !TEACHER_H