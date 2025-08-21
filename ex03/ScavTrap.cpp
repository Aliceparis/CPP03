#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap " << this->_name << " constructor default called" << std::endl;
    this->_hit_pts = 100;
    this->_energy_pts = 50;
    this->_attack_damage = 20;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap " << this->_name << " constructor param called" << std::endl;
    this->_hit_pts = 100;
    this->_energy_pts = 50;
    this->_attack_damage = 20;
}
ScavTrap::ScavTrap(const ScavTrap& source)
{
    std::cout << "ScavTrap constructor recopie called" << std::endl;
    *this = source;
}
ScavTrap&   ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap "  << this->_name << " destructor called" << std::endl;
}

/*membre fonction*/
void    ScavTrap::attack(const std::string& target)
{
    if (this->_energy_pts == 0)
    {
        std::cout << "ScavTrap " << this->_name
        << " has 0 energy points to attack" << std::endl;
        return ;
    }
    if (this->_hit_pts == 0)
    {
        std::cout << "ScavTrap " << this->_name
        << " has 0 hits points to attack" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name
        << " attacks " << target << ", causing " 
        << this->_attack_damage << " points of damage" << std::endl;
    this->_energy_pts--;
}
void    ScavTrap::guardGate()
{
    if (this->_energy_pts == 0)
    {
        std::cout << "ScavTrap " << this->_name
        << " has 0 energy points" << std::endl;
        return ;
    }
    if (this->_hit_pts == 0)
    {
        std::cout << "ScavTrap " << this->_name
        << " has 0 hits poinrs " << std::endl;
    }
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::show()
{
    std::cout << "ScavTrap " << this->_name
        << " | hits points " << this->_hit_pts
        << " | energy points " << this->_energy_pts
        << " | attack damage " << this->_attack_damage
        << std::endl;
}