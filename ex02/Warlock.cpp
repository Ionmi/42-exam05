#include "Warlock.hpp"

Warlock::~Warlock()
{
	cout << name << ": My job here is done!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
	book.learnSpell(spell);
}

void Warlock::forgetSpell(string spell_name)
{
	book.forgetSpell(spell_name);
}

void Warlock::launchSpell(string spell_name, ATarget const &target)
{
	ASpell *spell = book.createSpell(spell_name);
	ATarget const *constTarget = NULL;
	if (!spell || &target == constTarget)
		return;
	spell->launch(target);
}
