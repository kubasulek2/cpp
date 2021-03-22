#include <string>

#ifndef PERSON_H
#define PERSON_H
class Person
{
public:
	int age = 0;
	std::string name;
	Person(int age, std::string name);
};

#endif // !PERSON_H