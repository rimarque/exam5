#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <iostream>
#include "ASpell.hpp"

class Fireball;

class Fireball: public ASpell{
    public:
        Fireball();
        Fireball(const Fireball& copy);
        Fireball& operator=(const Fireball& copy);

        Fireball      *clone() const;

        ~Fireball();
};

#endif