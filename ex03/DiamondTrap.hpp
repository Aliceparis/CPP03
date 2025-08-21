#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


class   DiamondTrap: public FragTrap, public ScavTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap&    operator=(const DiamondTrap& other);
        ~DiamondTrap();

        /*membre fonction*/
        void    attack(const std::string& target);
        void    whoAmI();

        /*debug*/
        void    display();
};

#endif