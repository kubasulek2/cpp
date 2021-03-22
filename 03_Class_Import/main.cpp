#include <iostream>
#include <string>
#include "user.h"

int main()
{

	User me = User("Hero");
	User he = User("Elo");
	User she = User("Sheo");
	std::cout << User::_user_count;
	return 0;
}
