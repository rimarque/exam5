#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
        
TargetGenerator::TargetGenerator(const TargetGenerator& copy){ (void)copy;}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& copy) {
    (void)copy;
    return(*this);
}

void    TargetGenerator::learnTargetType(ATarget *target){
    if(target)
        if(_targetMap.find(target->getType()) == _targetMap.end())
            _targetMap[target->getType()] = target; //myMap[key] = value;
}

void    TargetGenerator::forgetTargetType(const std::string& target){
    //myMap.erase(key);
    if(_targetMap.find(target) != _targetMap.end())
        _targetMap.erase(target);
}

ATarget*  TargetGenerator::createTarget(std::string const & target){
    if (_targetMap.find(target) != _targetMap.end())
		return _targetMap[target];
	return NULL;
}
        
TargetGenerator::~TargetGenerator() {}