#include <iostream>
#include <string>

class User
{
private:
	std::string status;

public:
	std::string name;
	/* Default constructor */
	User() {}
	/* Custom constructor */
	User(std::string name, std::string status = "GOLD")
	{
		std::cout << "From custom constructor\n";
		this->status = status;
		this->name = name;
	}
	std::string get_status() { return this->status; }
	void set_status(std::string st)
	{
		if (st != "LAME")
			this->status = st;
	}
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
