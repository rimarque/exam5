#include "BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall"){}
        
BrickWall::BrickWall(const BrickWall& copy): ATarget(copy) { }

BrickWall& BrickWall::operator=(const BrickWall& copy) {
    if(this == &copy)
        return(*this);
    *this = copy;
    return(*this);
}

BrickWall  *BrickWall::clone() const{
    return new BrickWall;
 }

BrickWall::~BrickWall() {
    //std::cout << _type << ": My job here is done!" << std:: endl;
}