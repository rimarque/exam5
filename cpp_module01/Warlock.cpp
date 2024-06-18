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

void	Warlock::learnSpell(ASpell* spell)
{
    //Se o spell for novo, guarda
	if (spell)
		if (_spellCollection.find(spell->getName()) == _spellCollection.end())
			_spellCollection[spell->getName()] = spell->clone();
}

void	Warlock::forgetSpell(std::string spell)
{
	if (_spellCollection.find(spell) != _spellCollection.end())
		_spellCollection.erase(_spellCollection.find(spell));
}

void	Warlock::launchSpell(std::string spell, const ATarget& target)
{
	if (_spellCollection.find(spell) != _spellCollection.end())
		_spellCollection[spell]->launch(target);
}
        
Warlock::~Warlock() {
    std::cout << _name << ": My job here is done!" << std:: endl;
    for (std::map<std::string, ASpell*>::iterator it = _spellCollection.begin(); it != _spellCollection.end(); ++it)
		delete it->second;
	_spellCollection.clear();
}
