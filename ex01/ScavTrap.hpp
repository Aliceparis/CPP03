#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class   ScavTrap: public ClapTrap
{
    private:
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& source);
        ScavTrap&   operator=(const ScavTrap& other);
        ~ScavTrap();

        /*membre fonction*/
        void    attack(const std::string& target);
        void    guardGate();

        /*debug*/
        void    show();
};



#endif