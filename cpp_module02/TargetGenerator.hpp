#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <map>
# include "ATarget.hpp"

class TargetGenerator{
    public:
        TargetGenerator();
        void    learnTargetType(ATarget *target);
        void    forgetTargetType(const std::string& target);
        ATarget* createTarget(std::string const & target);
        ~TargetGenerator();
    private:
        TargetGenerator(const TargetGenerator& copy);
        TargetGenerator& operator=(const TargetGenerator& copy);
        std::map<std::string, ATarget *> _targetMap;

};

#endif