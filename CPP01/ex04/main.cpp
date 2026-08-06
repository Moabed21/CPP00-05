
#include <fstream>
#include <iostream>
#include <bits/stdc++.h>

void    process(std::ifstream &file, std::string old_filename)
{
    std::string new_filename = old_filename+".replace";
    std::string line;
    while(1)
    {
        if(file.eof())
            break;
        getline(file,line);
        
    }
    file.close();

}

int main()
{
    std::string filename, s1, s2;
    std::cout<<"enter filename: ";
    std::cin>>filename;
    std::cout<<"enter s1: ";
    std::cin>>s1;
    std::cout<<"enter s2: ";
    std::cin>>s2;
    
    if(filename.empty() || s1.empty() || s2.empty())
        return (1);

    std::ifstream file(filename);

    if(!file.is_open())
    {
        std::cerr << "Error: Unable to open file!\n";
        return 1;
    }
    process(file,filename);
}