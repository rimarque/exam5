#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <map>
# include "ATarget.hpp"

class SpellBook{
    public:
        SpellBook();
        void    learnSpell(ASpell *spell);
        void    forgetSpell(const std::string& spell);
        ASpell* createSpell(std::string const & spell);
        ~SpellBook();
    private:
        SpellBook(const SpellBook& copy);
        SpellBook& operator=(const SpellBook& copy);
        std::map<std::string, ASpell *> _spellMap;

};

#endif