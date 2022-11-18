#include "Warlock.hpp"

Warlock::~Warlock()
{
	cout << name << ": My job here is done!\n";

	for (SpellMap::iterator it = arr.begin(); it != arr.end(); it++)
		delete it->second;
	this->arr.clear();
}

void Warlock::learnSpell(ASpell *spell)
{
	if (!spell)
		return;
	arr.insert(std::make_pair(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(string spell_name)
{
	if (arr.find(spell_name) == arr.end())
		return;
	delete arr.at(spell_name);
	arr.erase(spell_name);
}

void Warlock::launchSpell(string spell_name, ATarget const &target)
{
	if (arr.find(spell_name) == arr.end())
		return;
	arr.at(spell_name)->launch(target);
}
