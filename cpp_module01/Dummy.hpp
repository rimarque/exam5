#ifndef Dummy_HPP
# define Dummy_HPP

# include <iostream>
# include "ATarget.hpp"

class Dummy: public ATarget{
    public:
        Dummy();
        Dummy(const Dummy& copy);
        Dummy& operator=(const Dummy& copy);

        Dummy  *clone() const;
        ~Dummy();
};

#endif