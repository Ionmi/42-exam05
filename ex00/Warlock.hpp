#include <iostream>

using std::cout;
using std::string;

class Warlock
{
	string name;
	string title;

	Warlock();
	Warlock(const Warlock &other);
	Warlock &operator=(const Warlock &other);

public:
	Warlock(const string &name, const string &title)
	{
		cout << name << ": This looks like another boring day.\n";
	}
	~Warlock() { cout << name << ": My job here is done!\n"; }

	const string &getName() const { return name; };
	const string &getTitle() const { return title; };

	void setTitle(const string &title) { this->title = title; };

	void introduce() const { cout << name << ": I am " << name << ", " << title << "!\n"; };
};
