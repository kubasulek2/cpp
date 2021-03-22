#include <iostream>
#include <string>
#include "user.h"


	User::User(std::string name)
	{
		User::_user_count++;
		this->name = name;
	}

	User::~User()
	{
		_user_count--;
	}
	
int User::User::_user_count = 0;
