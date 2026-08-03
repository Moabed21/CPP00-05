#include <iostream>

class Weapon
{
    std::string type;
    public:
        Weapon();
        Weapon(std::string weapon);
        const std::string &getType();
        void    setType(std::string value);

};