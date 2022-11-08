#include "Warlock.hpp"

Warlock::~Warlock()
{
	cout << name << ": My job here is done!\n";
	std::map<std::string, ASpell *>::iterator it;

	for (it = arr.begin(); it != arr.end(); it++)
		delete it->second;
	this->arr.clear();
}

void Warlock::learnSpell(ASpell *spell)
{
	if (!spell)
		return;
	arr.insert(std::make_pair(spell->getName(), spell->clone()));
	// arr.insert(std::pair<string, ASpell *>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(string spell_name)
{
	// std::map<string, ASpell *>::iterator it = arr.find(spell_name);
	// if (it != arr.end())
	// 	delete it->second;
	// arr.erase(spell_name);

	ASpell *spell = arr[spell_name];
	if (spell)
		delete spell;
	arr.erase(spell_name);
}

void Warlock::launchSpell(string spell_name, ATarget const &target)
{
	ASpell *spell = arr[spell_name];
	if (spell)
		spell->launch(target);
}
