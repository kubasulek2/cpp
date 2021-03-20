#include <iostream>
#include <string>

template <typename T>
struct User
{
public:
	T age;
	T salary;
	std::string name;
	std::string get_status() { return status; }

private:
	std::string status = "abc";
};

int main()
{

	User<int> me;
	me.age = 2;
	me.name = "Jakobi";
	me.salary = 4;
	
	std::cout << me.age << " " << me.get_status() << " " << me.name << std::endl;

	return 0;
}
