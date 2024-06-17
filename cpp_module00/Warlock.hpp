#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock{
    public:
        Warlock(const std::string& name, const std::string& title);

        const std::string& getName() const;
        const std::string& getTitle() const;

        void    setTitle(const std::string& title);
        void    introduce() const;

        ~Warlock();
    private:
        Warlock();
        Warlock(const Warlock& copy);
        Warlock& operator=(const Warlock& copy);

        const std::string   _name;
        std::string         _title;

};

#endif