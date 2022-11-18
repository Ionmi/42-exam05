#pragma once
#include <iostream>
#include "ATarget.hpp"

using std::cout;
using std::string;

class ATarget;

class ASpell
{
private:
	string name;
	string effects;

public:
	ASpell(){};
	ASpell(const ASpell &ref) : name(ref.name), effects(ref.effects){};
	ASpell &operator=(const ASpell &ref)
	{
		name = ref.name;
		effects = ref.effects;
		return *this;
	};
	ASpell(const string &name, const string &effects) : name(name), effects(effects) {}
	virtual ~ASpell(){};

	const string &getName() const { return name; };
	const string &getEffects() const { return effects; };

	void launch(const ATarget &target) const;

	virtual ASpell *clone() const = 0;
};

