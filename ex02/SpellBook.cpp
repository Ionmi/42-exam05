#include "SpellBook.hpp"

SpellBook::~SpellBook()
{
	std::map<string, ASpell *>::iterator it;

	for (it = arr.begin(); it != arr.end(); it++)
		delete it->second;
	arr.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (!spell)
		return;
	arr.insert(std::make_pair(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(string const &spell_name)
{
	ASpell *spell = arr[spell_name];
	if (spell)
		delete spell;
	arr.erase(spell_name);
}

ASpell *SpellBook::createSpell(string const &spell_name)
{
	ASpell *spell = arr[spell_name];
	if (spell)
		return spell;
	return NULL;
}
