#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock{
    public:
        Warlock(const std::string& name, const std::string& title);

        const std::string& getName() const;
        const std::string& getTitle() const;

        void    setTitle(const std::string& title);
        void    introduce() const;
        void    learnSpell(ASpell *spell);
        void    forgetSpell(const std::string spell);
        void    launchSpell(const std::string spell, const ATarget& target);
        ~Warlock();
    private:
        Warlock();
        Warlock(const Warlock& copy);
        Warlock& operator=(const Warlock& copy);

        const std::string   _name;
        std::string         _title;
        SpellBook           _book;
};

#endif