#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include <iostream>
# include "ATarget.hpp"

class BrickWall: public ATarget{
    public:
        BrickWall();
        BrickWall(const BrickWall& copy);
        BrickWall& operator=(const BrickWall& copy);

        BrickWall  *clone() const;
        ~BrickWall();
};

#endif