#include <iostream>
#include <string>

class User
{
private:
	std::string status;

public:
	int age;
	int salary;
	std::string name;
	/* Default constructor */
	User()
	{
		std::cout << "From default constructor\n";
	}
	/* Custom constructor */
	User(std::string name, std::string status = "GOLD")
	{
		std::cout << "From custom constructor\n";
		this->status = status;
		this->name = name;
	}
	/* Destructor */
	~User()
	{
		std::cout << "From destructor\n";
	}

	std::string get_status() { return status; }
};

int main()
{

	User me = User("Hero", "SILVER");
	me.age = 2;
	me.salary = 4;

	std::cout << me.age << " " << me.get_status() << " " << me.name << std::endl;
	User he;
	User she = User();
	return 0;
}
