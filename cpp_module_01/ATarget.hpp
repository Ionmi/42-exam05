#pragma once
#include <iostream>
#include "ASpell.hpp"

using std::cout;
using std::string;

class ASpell;

class ATarget
{
	string type;

public:
	ATarget(){};
	ATarget(const ATarget &ref) : type(ref.type){};
	ATarget &operator=(const ATarget &ref)
	{
		type = ref.type;
		return *this;
	}
	ATarget(const string &type) : type(type){};
	virtual ~ATarget() {};

	const string &getType() const { return type; };

	void getHitBySpell(const ASpell &spell) const;

	virtual ATarget *clone() const = 0;
};

#include "ASpell.hpp"