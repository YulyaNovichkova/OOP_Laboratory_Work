#include <iostream>
#include "Person.h"



int main()
{
    Person* person = new Person();
    person->SetSurname("Ivanov");
    person->SetName("Ivan");
    person->SetPatronymic("Ivanovich");
    ShowName(person);

    return 0;
}
