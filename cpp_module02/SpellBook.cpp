#include "SpellBook.hpp"

SpellBook::SpellBook() {}
        
SpellBook::SpellBook(const SpellBook& copy){ (void)copy;}

SpellBook& SpellBook::operator=(const SpellBook& copy) {
    (void)copy;
    return(*this);
}

void    SpellBook::learnSpell(ASpell *spell){
    if(spell)
        if(_spellMap.find(spell->getName()) == _spellMap.end())
            _spellMap[spell->getName()] = spell; //myMap[key] = value;
}

void    SpellBook::forgetSpell(const std::string& spell){
    //myMap.erase(key);
    if(_spellMap.find(spell) != _spellMap.end())
        _spellMap.erase(spell);
}

ASpell*  SpellBook::createSpell(std::string const & spell){
    if (_spellMap.find(spell) != _spellMap.end())
		return _spellMap[spell];
	return NULL;
}
        
SpellBook::~SpellBook() {}