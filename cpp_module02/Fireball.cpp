#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp"){}
        
Fireball::Fireball(const Fireball& copy): ASpell(copy){ }

Fireball& Fireball::operator=(const Fireball& copy) {
    if(this == &copy)
        return(*this);
    *this = copy;
    return *this; 
}

Fireball  *Fireball::clone() const{
    return new Fireball;
}
     
Fireball::~Fireball() {
    //std::cout << _name << ": My job here is done!" << std:: endl;
}