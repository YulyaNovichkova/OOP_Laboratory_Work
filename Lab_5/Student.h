#pragma once
#include "Person.h"

class Student : public Person
{
private:
	int _id;
	int _year;
public:
	void SetId(int id);
	void SetYear(int year);

	int GetId();
	int GetYear();

	Student();
	Student(string name, string surname, string patronymic, int id, int year);
};