#ifndef HARL_HPP
#define HARL_HPP
#include <fstream>
#include <iostream>
#include <bits/stdc++.h>
#include <string>


class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();  

    public:
    void complain( std::string level );
};

typedef struct component
{
    std::string name;
    void    (Harl::*ptr) (void) ;
}component;


#endif