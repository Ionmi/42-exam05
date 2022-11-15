#pragma once

#include "ASpell.hpp"
#include <map>
typedef std::map<string, ASpell *> Map;

class SpellBook
{
	Map arr;

	SpellBook(SpellBook const &other);
	SpellBook &operator=(SpellBook const &other);

public:
	SpellBook() {}
	~SpellBook();

	void learnSpell(ASpell *aspell_ptr);
	void forgetSpell(std::string const &name);
	ASpell *createSpell(std::string const &name);
};