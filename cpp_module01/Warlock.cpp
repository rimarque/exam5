#include "Warlock.hpp"

Warlock::Warlock() {}
        
Warlock::Warlock(const Warlock& copy){ (void)copy;}

Warlock& Warlock::operator=(const Warlock& copy) {
    (void)copy;
    return(*this);
}

Warlock::Warlock(const std::string& name, const std::string& title)
    :   _name(name),
        _title(title){
            std::cout << _name <<": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName() const{
    return _name;
}

const std::string& Warlock::getTitle() const{
    return _title;
}

void    Warlock::setTitle(const std::string& title){
    _title = title;
}

void    Warlock::introduce() const {
    std::cout << _name <<": I am " << _name << ", " << _title << "!" << std::endl;

}

void    Warlock::learnSpell(ASpell *spell){
    if(spell)
        if(_spellMap.find(spell->getName()) == _spellMap.end())
            _spellMap[spell->getName()] = spell->clone(); //myMap[key] = value;
}

void    Warlock::forgetSpell(const std::string spell){
    //myMap.erase(key);
    if(_spellMap.find(spell) != _spellMap.end())
        _spellMap.erase(spell);
}

void    Warlock::launchSpell(const std::string spell, const ATarget& target) {
    if(_spellMap.find(spell) != _spellMap.end())
        _spellMap[spell]->launch(target);
}
        
Warlock::~Warlock() {
    for(std::map<std::string, ASpell *>::iterator it = _spellMap.begin(); it != _spellMap.end(); ++it)
        delete it->second;
    _spellMap.clear();
    std::cout << _name << ": My job here is done!" << std:: endl;
}
