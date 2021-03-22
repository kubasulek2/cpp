#ifndef USER_H
#define  USER_H 
class User
{
public:
	static int _user_count;
	std::string name;

	User(std::string name);
	
	~User();
	void friend print_status(User user);

private:
	std::string status = "GOLD";
};
#endif // !USER_H
