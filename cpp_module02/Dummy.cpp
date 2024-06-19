#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy"){}
        
Dummy::Dummy(const Dummy& copy): ATarget(copy) { }

Dummy& Dummy::operator=(const Dummy& copy) {
    if(this == &copy)
        return(*this);
    *this = copy;
    return(*this);
}

Dummy  *Dummy::clone() const{
    return new Dummy;
 }

Dummy::~Dummy() {
    //std::cout << _type << ": My job here is done!" << std:: endl;
}