#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    Amelia("amelia");
    ScavTrap    Bob("bob");
    ScavTrap    Zoe(Bob);

    std::cout << "----------Before attaque--------"<< std::endl;
    Amelia.show();
    Bob.show();
    Zoe.show();

    Bob.takeDamage(5);
    Bob.guardGate();
    Bob.beRepaired(10);
    Bob.show();
    std::cout << "-----Attaque------" << std::endl;
    Amelia.attack("Bob");
    Amelia.show();
    Bob.attack("Annes");
    Bob.show();
    //bob.ClapTrap::show();
    Bob.guardGate();
    for(int i(0); i < 51; i++)
    {
        Bob.attack("Annes");
    }

    std::cout << "-------Attack finish--------" << std::endl;
    Bob.takeDamage(150);
    Bob.guardGate();
    Bob.beRepaired(10);

    return (0);
}