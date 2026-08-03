
class HumanB
{
    Weapon weapon;
    std::string name;
    public:
    HumanB(std::string name);
        void    setWeapon(Weapon weapon);
        void    attack();
        void    setType(std::string type);
};