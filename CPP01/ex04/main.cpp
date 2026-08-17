
#include <cstddef>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

std::string filename, s1, s2;

std::string manip(std::string line)
{
    std::size_t a, size1, size2;

    size2 = s2.length();
    size1 = s1.length();
    std::size_t start_pos = 0;
    while (1)
    {
        a = line.find(s1,start_pos);
        if (a == std::string::npos)
            break;
        line.erase(a, size1);
        line.insert(a,s2);
        start_pos = a + size2; 
    }
    return (line);
}

void    process(std::ifstream &file)
{
    std::string new_filename = filename + ".replace";
    std::ofstream new_file(new_filename.c_str());
    std::string line;

    while (getline(file, line))
    {
        line = manip(line);
        new_file << line << std::endl;
    }
    file.close();
    new_file.close();
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }

    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    
    if(filename.empty() || s1.empty())
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }

    std::ifstream file(filename.c_str());

    if(!file.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }
    process(file);
    return(0);
}