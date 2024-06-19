#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>

class ATarget;

class ASpell{
    public:
        ASpell();
        ASpell(const std::string& name, const std::string& effects);
        ASpell(const ASpell& copy);
        ASpell& operator=(const ASpell& copy);

        const std::string& getName() const;
        const std::string& getEffects() const;

        virtual ASpell      *clone() const = 0;
        void                launch(const ATarget& target) const;

        virtual             ~ASpell();

    private:
        std::string         _name;
        std::string         _effects;
};

#endif