#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ATarget{
    public:
        ATarget();
        ATarget(const std::string& type);
        ATarget(const ATarget& copy);
        ATarget& operator=(const ATarget& copy);

        const std::string& getType() const;
        const std::string& getEffects() const;

        virtual ATarget  *clone() const = 0;
        void    getHitSpell(const ASpell& spell) const; //<TYPE> has been <EFFECTS>!


        virtual ~ATarget();

    private:
        std::string         _type;
};

#endif