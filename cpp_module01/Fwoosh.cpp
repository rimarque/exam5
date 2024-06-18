#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed"){}
        
Fwoosh::Fwoosh(const Fwoosh& copy): ASpell(copy){ }

Fwoosh& Fwoosh::operator=(const Fwoosh& copy) {
    if(this == &copy)
        return(*this);
    *this = copy;
    return *this; 
}

Fwoosh  *Fwoosh::clone() const{
    return new Fwoosh;
}
     
Fwoosh::~Fwoosh() {
    //std::cout << _name << ": My job here is done!" << std:: endl;
}