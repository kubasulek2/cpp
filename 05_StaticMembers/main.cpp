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
	
};
int User::_user_count = 0;

int main()
{

	User me = User("Hero");
	User he = User("Elo");
	User she = User("Sheo");
	std::cout << User::_user_count;
	return 0;
}
