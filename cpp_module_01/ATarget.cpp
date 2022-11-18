#include "ATarget.hpp"

void ATarget::getHitBySpell(ASpell const &spell) const
{
	cout << type << " has been " << spell.getEffects() << "!\n";
}