#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class   FragTrap: virtual public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& other);
        FragTrap&   operator=(const FragTrap& other);
        ~FragTrap();

        /*membre fonction*/
        void    highFivesGuys(void);
        /*debug*/
        void    show();
};





#endif