#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator()
{
	std::map<string, ATarget *>::iterator it;

	for (it = arr.begin(); it != arr.end(); it++)
		delete it->second;
	arr.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (!target)
		return;
	arr.insert(std::make_pair(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(const std::string &target_name)
{
	ATarget *target = arr[target_name];
	if (target)
		delete target;
	arr.erase(target_name);
}

ATarget *TargetGenerator::createTarget(const std::string &target_name)
{
		ATarget *target = arr[target_name];
	if (target)
		return target;
	return NULL;
}
