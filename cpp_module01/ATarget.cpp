#include "ATarget.hpp"

ATarget::ATarget() {}
        
ATarget::ATarget(const ATarget& copy): _type(copy._type) { }

ATarget& ATarget::operator=(const ATarget& copy) {
    if(this == &copy)
        return(*this);
    _type = copy._type;
    return(*this);
}

ATarget::ATarget(const std::string& type)
    :   _type(type){
        //std::cout << _type <<": This looks like another boring day." << std::endl;
}

const std::string& ATarget::getType() const{
    return _type;
}

void    ATarget::getHitSpell(const ASpell& spell) const{
    std::cout << _type << " has been " << spell.getEffects() << "!" << std:: endl;
    //<TYPE> has been <EFFECTS>!
}
ATarget::~ATarget() {
    //std::cout << _type << ": My job here is done!" << std:: endl;
}