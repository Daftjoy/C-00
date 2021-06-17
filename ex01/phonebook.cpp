#include "phonebook.hpp"

int main()
{
    std::string opt;
    int exit;
    //Contact n_contact;
    
    exit = 1;

    while (exit)
    {
        std::cout << "Please choose to ADD a new contact, SEARCH in the phonebook or EXIT this setup: ";
        std::getline(std::cin, opt);
        
        if (opt == "EXIT")
        {
            std::cout << "Exiting program, thank you for trusting us!!" << std::endl;
            exit = 0;
        }
        else if (opt == "ADD")
        {
            std::cout << "Ahora te lo hago" << std::endl;
        }
        else if (opt == "SEARCH")
            std::cout << "Te lo busco" << std::endl;
        else
        {
            std::cout << opt;
            std::cout << " is not a valid option." << std::endl;
        }
    }



}