#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    std::cout << "DiamondTrap Diamond constructor DEFAULT called" << std::endl;
    this->_hit_pts = FragTrap::_hit_pts;
    this->_energy_pts = ScavTrap::_energy_pts;
    this->_attack_damage = FragTrap::_attack_damage;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
                                             FragTrap(name), ScavTrap(name), _name(name)
{
    std::cout << "Diamond " << this->_name
              << " constructor PARAM called" << std::endl;
    this->_hit_pts = FragTrap::_hit_pts;
    this->_energy_pts = ScavTrap::_energy_pts;
    this->_attack_damage = FragTrap::_attack_damage;
}
DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other)
{
    std::cout << "DiamondTrap constructor COPY called" << std::endl;
    *this = other;
}
/*
if i give the constructor copie une init, it will take the constructor param
it take the constructor default, not the default with operator assignment
*/
/*DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),
                                                     FragTrap(other), ScavTrap(other), _name(other._name)
{
    std::cout << "DiamondTrap constructor copy called" << std::endl;
    this->_hit_pts = other._hit_pts;
    this->_energy_pts = other._energy_pts;
    this->_attack_damage = other._attack_damage;
}*/
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hit_pts = other._hit_pts;
        this->_energy_pts = other._energy_pts;
        this->_attack_damage = other._attack_damage;
    }
    return (*this);
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

/*membre funcion*/
void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << this->_name
              << ", and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

/*debug*/
void DiamondTrap::display()
{
    std::cout << "Diamond " << this->_name
              << " | hits points " << this->_hit_pts
              << " | energy points " << this->_energy_pts
              << " | attack damage " << this->_attack_damage
              << std::endl;
}