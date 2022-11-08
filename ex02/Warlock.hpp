#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

using std::cout;
using std::string;

class Warlock
{
	string name;
	string title;
	std::map<string, ASpell *> arr;
	SpellBook book;

	Warlock();
	Warlock(const Warlock &other);
	Warlock &operator=(const Warlock &other);

public:
	Warlock(const string &name, const string &title) : name(name), title(title)
	{
		cout << name << ": This looks like another boring day.\n";
	}
	~Warlock();

	const string &getName() const { return name; };
	const string &getTitle() const { return title; };

	void setTitle(const string &title) { this->title = title; };

	void introduce() const { cout << name << ": I am " << name << ", " << title << "!\n"; };

	void learnSpell(ASpell *spell);
	void forgetSpell(const string name);
	void launchSpell(const string name, const ATarget &target);
};
