#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter"){}
        
Polymorph::Polymorph(const Polymorph& copy): ASpell(copy){ }

Polymorph& Polymorph::operator=(const Polymorph& copy) {
    if(this == &copy)
        return(*this);
    *this = copy;
    return *this; 
}

Polymorph  *Polymorph::clone() const{
    return new Polymorph;
}
     
Polymorph::~Polymorph() {
    //std::cout << _name << ": My job here is done!" << std:: endl;
}