# include <iostream>

int main()
{
    std::string variable = "HI THIS IS BRAIN";
    std::string *stringPTR = &variable;
    std::string &stringREF = variable;
     
    std::cout<<"string    address: "<<&variable<<std::endl;
    std::cout<<"stringPTR address: "<<stringPTR<<std::endl;
    std::cout<<"stringRED address: "<<&stringREF<<std::endl;

    std::cout<<"string    value: "<<variable<<std::endl;
    std::cout<<"stringPTR value: "<<*stringPTR<<std::endl;
    std::cout<<"stringRED value: "<<stringREF<<std::endl;

    return (0);
}