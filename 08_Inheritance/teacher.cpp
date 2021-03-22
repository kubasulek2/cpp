#include "teacher.h"
#include "person.h"

Teacher::Teacher(int age, std::string name, int salary)
		: Person::Person(age, name)
{
	this->salary = salary;
};