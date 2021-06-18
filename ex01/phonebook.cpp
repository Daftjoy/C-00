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
}

void print_first(std::string val)
{
    int i;

    i = -1;
    while (++i < 9)
        std::cout << val[i];
    std::cout << '.';
}

void print_info(Contact contact)
{
    std::cout << contact.get_first_name() << std::endl;
    std::cout << contact.get_last_name() << std::endl;
    std::cout << contact.get_nickname() << std::endl;
    std::cout << contact.get_login() << std::endl;
    std::cout << contact.get_postal_address() << std::endl;
    std::cout << contact.get_email_address() << std::endl;
    std::cout << contact.get_phone_number() << std::endl;
    std::cout << contact.get_birthday_date() << std::endl;
    std::cout << contact.get_favorite_meal() << std::endl;
    std::cout << contact.get_underwear_color() << std::endl;
    std::cout << contact.get_darkest_secret() << std::endl;

}

void search_contacts(Contact list[8], int number_contacts)
{
    int i;
    int id;

    i = -1;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    while(++i <= number_contacts)
    {
        std::cout << "|         " << i + 1 << "|";
        if (int(list[i].get_first_name().length()) > 10)
            print_first(list[i].get_first_name());
        else
        {
            for (int j = 0; j < 10 - int(list[i].get_first_name().length()); j++)
                std::cout << " ";
            std::cout << list[i].get_first_name();
        }
        std::cout << "|";
        if (int(list[i].get_last_name().length()) > 10)
            print_first(list[i].get_last_name());
        else
        {
            for (int j = 0; j < 10 - int(list[i].get_last_name().length()); j++)
                std::cout << " ";
            std::cout << list[i].get_last_name();
        }
        std::cout << "|";
        if (int(list[i].get_nickname().length()) > 10)
            print_first(list[i].get_nickname());
        else
        {
            for (int j = 0; j < 10 - int(list[i].get_nickname().length()); j++)
                std::cout << " ";
            std::cout << list[i].get_nickname();
        }
        std::cout << "|" << std::endl;
    }
    while (1)
    {
        std::cout << "Please choose a Contact ID to show info about it or enter 42 to go back to main setup: ";
        std::cin >> id;
        if (id == 42)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        else if (id > 0 && id <= number_contacts + 1 && id != '\n')
            print_info(list[id - 1]);
        else
            std::cout << "Not a valid Index" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');    
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