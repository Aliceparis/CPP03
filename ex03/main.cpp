#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "-----Construction------" << std::endl;
    ClapTrap    Anne("anne");

    std::cout << "******Bob construction******" << std::endl;
    DiamondTrap Bob("bob");
    Bob.whoAmI();
    Bob.display();

    std::cout << "*******Zoe*******" << std::endl;
    DiamondTrap Zoe(Bob);
    Zoe.whoAmI();
    Zoe.display();
    
    std::cout << "-------attack--------" << std::endl;
    Bob.attack("Raphael");
    Bob.display();
    Bob.takeDamage(80);
    Bob.display();
    Bob.guardGate();
    Bob.highFivesGuys();
    Bob.beRepaired(1);

    std::cout << "------invalide actions------" << std::endl;
    for(int i(0); i < 100; i++)
    {
        Bob.attack("Raphael");
    }
    Bob.display();
    Bob.takeDamage(1);
    Bob.display();
    Bob.guardGate();
    Bob.highFivesGuys();
    Bob.beRepaired(1);

    Bob.display();

    return (0);
}