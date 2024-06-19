#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
#include "ASpell.hpp"

class Polymorph;

class Polymorph: public ASpell{
    public:
        Polymorph();
        Polymorph(const Polymorph& copy);
        Polymorph& operator=(const Polymorph& copy);

        Polymorph      *clone() const;

        ~Polymorph();
};

#endif