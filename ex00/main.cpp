#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    Zoe("zoe");
    ClapTrap    Bob("bob");


    std::cout << "-------------recopie-----------------" << std::endl;
    ClapTrap    Joan(Bob);
    ClapTrap    Juju;

    Juju = Zoe;
    Joan.show();
    Juju.show();

    /*copy constructor: 2 facons de presenter
    1. ClapTrao Joan(Bob)
    2. Juju = Zoe
    */
    Zoe.attack("Stragers");
    Zoe.show();

    Zoe.takeDamage(3);
    Zoe.show();

    Zoe.beRepaired(5);
    Zoe.show();

    for(int i(0); i < 11; i++)
    {
        Zoe.attack("Raphael");
        Zoe.show();
    }
    Zoe.beRepaired(1);
    Zoe.show();
    return (0);
}