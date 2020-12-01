#include "Person.h"

void Person::SetName(string name)
{
	this->_name = name;
}

void Person::SetSurname(string surname)
{
	this->_surname = surname;
}

void Person::SetPatronymic(string patronymic)
{
	this->_patronymic = patronymic;
}

string Person::GetName()
{
	return this->_name;
}

string Person::GetSurname()
{
	return this->_surname;
}

string Person::GetPatronymic()
{
	return this->_patronymic;
}

Person::Person()
{
	this->_surname = "";
	this->_name = "";
	this->_patronymic = "";
}

Person::Person(string surname, string name, string patronymic)
{
	this->SetSurname(surname);
	this->SetName(name);
	this->SetPatronymic(patronymic);
}

void ShowName(Person* person)
{
	cout << person->GetSurname() << " " <<
		person->GetName() << " " <<
		person->GetPatronymic() << endl;
}