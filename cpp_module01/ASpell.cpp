#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() {}
        
ASpell::ASpell(const ASpell& copy): _name(copy._name), _effects(copy._effects){ }

ASpell& ASpell::operator=(const ASpell& copy) {
    if(this == &copy)
        return(*this);
    _name = copy._name;
    _effects = copy._effects;
    return(*this);
}

ASpell::ASpell(const std::string& name, const std::string& effects)
    :   _name(name),
        _effects(effects){
        //std::cout << _name <<": This looks like another boring day." << std::endl;
}

const std::string& ASpell::getName() const{
    return _name;
}

const std::string& ASpell::getEffects() const{
    return _effects;
}

void                ASpell::launch(const ATarget& target) const{
    target.getHitSpell(*this);
}
        
ASpell::~ASpell() {
    //std::cout << _name << ": My job here is done!" << std:: endl;
}