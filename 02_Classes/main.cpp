#include <iostream>
#include <string>

class User
{
public:
	int age;
	int salary;
	std::string name;
	std::string get_status() { return status; }

private:
	std::string status = "abc";
};

int main()
{

	User me;
	me.age = 2;
	me.name = "Jakobi";
	me.salary = 4;

	User he = User();


	std::cout << me.age << " " << me.get_status() << " " << me.name << std::endl;

	return 0;
}
