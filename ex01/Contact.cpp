#include "phonebook.hpp"
#include "Contact.hpp"


// SETTERS

void	Contact::set_first_name(std::string val)
{
	this->first_name = val;
}

void	Contact::set_last_name(std::string val)
{
	this->last_name = val;
}

void	Contact::set_nickname(std::string val)
{
	this->nickname = val;
}

void	Contact::set_phone_number(std::string val)
{
	this->phone_number = val;
}

void	Contact::set_darkest_secret(std::string val)
{
	this->darkest_secret = val;
}

// GETTERS

std::string Contact::get_first_name(void)
{
    return (this->first_name);
}

std::string Contact::get_last_name(void)
{
    return (this->last_name);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_phone_number(void)
{
    return (this->phone_number);
}

std::string Contact::get_darkest_secret(void)
{
    return (this->darkest_secret);
}
