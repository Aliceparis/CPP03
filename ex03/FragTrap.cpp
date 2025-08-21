#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap " << this->_name << " constructor default called" << std::endl;
    this->_hit_pts = 100;
    this->_energy_pts = 100;
    this->_attack_damage = 30;
}
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap " << this->_name << " constructor param called" << std::endl;
    this->_hit_pts = 100;
    this->_energy_pts = 100;
    this->_attack_damage = 30;
}
FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "FragTrap " << this->_name << " constructor copie called" << std::endl;
    *this = other;
}
FragTrap&   FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap " << this->_name << " copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other); 
    return (*this);
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name
        << " destructor called" << std::endl;
}

/*membre fonction*/
void    FragTrap::highFivesGuys(void)
{
    if (this->_hit_pts == 0)
    {
        std::cout << "FragTrap " << this->_name
                << " has 0 hits points to hightfive" << std::endl;
        return ;
    }
    if (this->_energy_pts == 0)
    {
        std::cout << "FragTrap " << this->_name
                << " has 0 energy points to give a hightfive" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name
            << " gives a hight five" << std::endl;
}

/*debug*/
void    FragTrap::show()
{
    std::cout << "FragTrap " << this->_name
            << " | hits points " << this->_hit_pts
            << " | energy points " << this->_energy_pts
            << " | attack damage " << this->_attack_damage
            << std::endl;
}