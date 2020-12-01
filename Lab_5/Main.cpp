#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main()
{
    Person* person = new Person();
    person->SetSurname("Ivanov");
    person->SetName("Ivan");
    person->SetPatronymic("Ivanovich");
    ShowName(person);

    Student* student = new Student();
    student->SetSurname("Novichkova");
    student->SetName("Yulya");
    student->SetPatronymic("Alexsandrovna");
    student->SetId(8564758);
    student->SetYear(2016);
    ShowName(student);

    Teacher* teacher = new Teacher();
    teacher->SetSurname("Jigalova");
    teacher->SetName("Elena");
    teacher->SetPatronymic("Fedorovna");
    teacher->SetPosition("Docent");
    ShowName(teacher);

    delete person;
    delete student;
    delete teacher;
    return 0;
}
