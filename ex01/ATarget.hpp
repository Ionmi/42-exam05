#pragma once
#include <iostream>

using std::cout;
using std::string;

class ASpell;

class ATarget
{
	string type;

	ATarget(){};
	ATarget(const ATarget &ref) : type(ref.type){};
	ATarget &operator=(const ATarget &ref)
	{
		type = ref.type;
		return *this;
	}

public:
	ATarget(const string &type) : type(type){};
	virtual ~ATarget() {};

	const string &getType() const { return type; };

	void getHitBySpell(const ASpell &spell) const;

	virtual ATarget *clone() const = 0;
};

#include "ASpell.hpp"