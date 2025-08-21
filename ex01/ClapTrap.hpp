#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class   ClapTrap
{
    protected:
        std::string _name;
        unsigned int    _hit_pts;
        unsigned int    _energy_pts;
        unsigned int    _attack_damage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& source);
        ClapTrap&   operator=(const ClapTrap& other);
        ~ClapTrap();

        /*membre fonction */
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        /*debug*/
        void    show();
};





#endif