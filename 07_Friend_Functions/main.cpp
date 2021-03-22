#include <iostream>
#include <string>

class User
{
public:
	static int _user_count;
	std::string name;

	User(std::string name)
	{
		User::_user_count++;
		this->name = name;
	}

	~User()
	{
		_user_count--;
	}

	void friend print_status(User user);

private:
	std::string status = "GOLD";
};

int User::_user_count = 0;

void print_status(User user) {
	std::cout << user.status << std::endl;
}


int main()
{

	User me = User("Hero");
	User he = User("Elo");
	User she = User("Sheo");
	std::cout << User::_user_count;
	print_status(he);
	return 0;
}
