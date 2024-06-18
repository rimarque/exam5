#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
#include "ASpell.hpp"

class Fwoosh;

class Fwoosh: public ASpell{
    public:
        Fwoosh();
        Fwoosh(const Fwoosh& copy);
        Fwoosh& operator=(const Fwoosh& copy);

        Fwoosh      *clone() const;

        ~Fwoosh();
};

#endif