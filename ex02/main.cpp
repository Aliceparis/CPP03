#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    Annes("annes");
    FragTrap    Julie("julie");
    FragTrap    Bob(Julie);

    std::cout << "------Before attack-------" << std::endl;
    Annes.show();
    Julie.show();
    Bob.show();

    std::cout << "------attack-------" << std::endl;
    Julie.attack("kevin");
    Julie.show();

    Julie.takeDamage(50);
    Julie.beRepaired(1);
    Julie.show();
    Julie.highFivesGuys();
    for(int i(0); i < 101; i++)
    {
        Julie.attack("kevin");
    }

    std::cout << "-------after attack------" << std::endl;
    Julie.show();
    Julie.highFivesGuys();
    Julie.takeDamage(5);
    Julie.beRepaired(3);
    
    return (0);
}