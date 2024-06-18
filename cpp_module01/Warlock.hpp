#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include "ASpell.hpp"
# include "map"

class Warlock{
    public:
        Warlock(const std::string& name, const std::string& title);

        const std::string& getName() const;
        const std::string& getTitle() const;

        void    setTitle(const std::string& title);
        void    introduce() const;
        void    learnSpell(ASpell *spell);
        void    forgetSpell(const std::string spellName);
        void    launchSpell(const std::string spellName, const ATarget& target);

        ~Warlock();
    private:
        Warlock();
        Warlock(const Warlock& copy);
        Warlock& operator=(const Warlock& copy);

        const std::string               _name;
        std::string                     _title;
        std::map<std::string, ASpell *>	_spellCollection;
};

#endif