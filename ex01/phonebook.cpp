#include "phonebook.hpp"
#include "Contact.hpp"

void add_contact(Contact list[8], int i)
{
    std::string val;
    std::cout << "Please enter the first name: ";
    std::getline(std::cin, val);
    list[i].set_first_name(val);
    std::cout << "Please enter the last name: ";
    std::getline(std::cin, val);
    list[i].set_last_name(val);
    std::cout << "Please enter the  nickname: ";
    std::getline(std::cin, val);
    list[i].set_nickname(val);
    std::cout << "Please enter the login: ";
    std::getline(std::cin, val);
    list[i].set_login(val);
    std::cout << "Please enter the postal address: ";
    std::getline(std::cin, val);
    list[i].set_postal_address(val);
    std::cout << "Please enter the email address: ";
    std::getline(std::cin, val);
    list[i].set_email_address(val);
    std::cout << "Please enter the phone number: ";
    std::getline(std::cin, val);
    list[i].set_phone_number(val);
    std::cout << "Please enter the birthday date: ";
    std::getline(std::cin, val);
    list[i].set_birthday_date(val);
    std::cout << "Please enter the favorite meal: ";
    std::getline(std::cin, val);
    list[i].set_favorite_meal(val);
    std::cout << "Please enter the underwear color: ";
    std::getline(std::cin, val);
    list[i].set_underwear_color(val);
    std::cout << "Please enter the darkest secret: ";
    std::getline(std::cin, val);
    list[i].set_darkest_secret(val);
    std::cout << list[i].get_first_name() << std::endl;
    std::cout << list[i].get_underwear_color() << std::endl;
}

void search_contacts(Contact list[8], int number_contacts)
{
    int i;

    i = -1;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    while(++i <= number_contacts)
    {
        std::cout << "|         ";
        std::cout << i + 1;
        std::cout << "|";
        for (int j = 0; j < 10 - int(list[i].get_first_name().length()); j++)
            std::cout << " ";
        std::cout << list[i].get_first_name();
        std::cout << "|";
        for (int j = 0; j < 10 - int(list[i].get_last_name().length()); j++)
            std::cout << " ";
        std::cout << list[i].get_last_name();
        std::cout << "|";
        for (int j = 0; j < 10 - int(list[i].get_nickname().length()); j++)
            std::cout << " ";
        std::cout << list[i].get_nickname();
        std::cout << "|";
        std::cout << std::endl;
    }
}


int main()
{
    Contact list[8];
    std::string opt;
    int i;
    
    i = -1;

    while (1)
    {
        std::cout << "Please choose to ADD a new contact, SEARCH in the phonebook or EXIT this setup: ";
        std::getline(std::cin, opt);
        
        if (opt == "EXIT")
        {
            std::cout << "Exiting program, thank you for trusting us!!" << std::endl;
            break;
        }
        else if (opt == "ADD")
        {
            if (++i < 8)
                add_contact(list, i);
            else
                std::cout << "You have exceeded the eight contacts limitation" << std::endl;
        }
        else if (opt == "SEARCH")
        {
            if (i > -1)
                search_contacts(list, i);
            else
                std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
        }
    }
}