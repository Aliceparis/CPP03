#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hit_pts(10), _energy_pts(10), _attack_damage(0)
{
    std::cout << "ClapTrap " << this->_name << " constructor Default called" << std::endl;
}
ClapTrap::ClapTrap(std::string name): _name(name), _hit_pts(10),
            _energy_pts(10), _attack_damage(0)
{
    std::cout << "ClapTrap " << this->_name << " constructor Param called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap " << this->_name << " constructor Copy called" << std::endl;
    *this = other;
}
ClapTrap&   ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap " << this->_name << " copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hit_pts = other._hit_pts;
        this->_energy_pts = other._energy_pts;
        this->_attack_damage = other._attack_damage;
    }
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name
        << " Destructor called" << std::endl;
}

/*membre fonction*/
void   ClapTrap::attack(const std::string& target)
{
    if (this->_energy_pts == 0)
    {
        std::cout << "ClapTrap " << this->_name
                << " attack failed: 0 energy points" << std::endl;
        return ;
    }
    if (this->_hit_pts == 0)
    {
        std::cout << "ClapTrap " << this->_name
                <<" attack failed: 0 hits points" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name
            << " attacks " << target << ", causing "
            << this->_attack_damage << " points of damage!"
            << std::endl;
    this->_energy_pts--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_energy_pts == 0)
    {
        std::cout << "ClapTrap " << this->_name
                << " has 0 energy points to take damage"
                << std::endl;
        return ;
    }
    if (this->_hit_pts < amount)
    {
        unsigned int    tmp(this->_hit_pts);
        std::cout << "ClapTrap " << this->_name
                << " takes " << tmp << " hits points"
                << std::endl;
        this->_hit_pts = 0;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name
                << " taken " << amount
                << " hits points" << std::endl;
        this->_hit_pts -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_pts == 0)
    {
        std::cout << "ClapTrap " << this->_name
                << " has 0 hits points to be repaired"
                << std::endl;
        return ;
    }
    if (this->_energy_pts == 0)
    {
        std::cout << "ClapTrap " << this->_name
                << " has 0 energy points to be repaired"
                << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name
            << " add " << amount
            << " hits points" << std::endl;
    this->_hit_pts += amount;
    this->_energy_pts--;
}
/*debug*/
void    ClapTrap::show()
{
    std::cout << "ClapTrap " << this->_name
            << " | hits points " << this->_hit_pts
            << " | energy points " << this->_energy_pts
            << " | attack damage " << this->_attack_damage
            << std::endl;
}