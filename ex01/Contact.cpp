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
void	Contact::set_login(std::string val)
{
	this->login = val;
}
void	Contact::set_postal_address(std::string val)
{
	this->postal_address = val;
}
void	Contact::set_email_address(std::string val)
{
	this->email_address = val;
}
void	Contact::set_phone_number(std::string val)
{
	this->phone_number = val;
}
void	Contact::set_birthday_date(std::string val)
{
	this->birthday_date = val;
}
void	Contact::set_favorite_meal(std::string val)
{
	this->favorite_meal = val;
}
void	Contact::set_underwear_color(std::string val)
{
	this->underwear_color = val;
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

std::string Contact::get_login(void)
{
    return (this->login);
}

std::string Contact::get_postal_address(void)
{
    return (this->postal_address);
}

std::string Contact::get_email_address(void)
{
    return (this->email_address);
}

std::string Contact::get_phone_number(void)
{
    return (this->phone_number);
}

std::string Contact::get_birthday_date(void)
{
    return (this->birthday_date);
}

std::string Contact::get_favorite_meal(void)
{
    return (this->favorite_meal);
}

std::string Contact::get_underwear_color(void)
{
    return (this->underwear_color);
}

std::string Contact::get_darkest_secret(void)
{
    return (this->darkest_secret);
}
