#include "Student.h"

void Student::SetId(int id)
{
	this->_id = id;
}

void Student::SetYear(int year)
{
	this->_year = year;
}

int Student::GetId()
{
	return this->_id;
}

int Student::GetYear()
{
	return this->_year;
}

Student::Student(string name, string surname, string patronymic, int id, int year) : Person(name, surname, patronymic)
{
	this->SetId(id);
	this->SetYear(year);
}