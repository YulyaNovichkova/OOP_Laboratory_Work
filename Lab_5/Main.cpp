#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "User.h"
#include "PaidUser.h"

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

    Post* post = new Post();

    User** users = new User * [] 
    {   
        new User(100000, "morkovka1995", "1995morkovka"), 
        new User(100001, "ilon_mask", "X æ A-12"), 
        new User(100002, "megazver", "password"), 
        new User(100003, "yogurt", "ksTPQzSu"), 
        new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
        new PaidUser(200001, "system_exe", "UgfkDGmU"),
        new PaidUser(200002, "RazorQ", "TBgRnbCP"),
        new PaidUser(200003, "schdub", "CetyQVID"),
    };

    //PaidUser** paidUsers = new PaidUser * [] 
    //{   
    //    new PaidUser(200000, "TheKnyazz", "JHPzPGFG"), 
    //    new PaidUser(200001, "system_exe", "UgfkDGmU"), 
    //    new PaidUser(200002, "RazorQ", "TBgRnbCP"), 
    //    new PaidUser(200003, "schdub", "CetyQVID"), 
    //};

    string login = "megazver";  
    string password = "password";  
    User* loginedUser = Login(users, 8, login, password);

    cout << "Signed in as: " << loginedUser->GetLogin() << endl;   

   /* login = "system_exe";  
    password = "UgfkDGmU";  
    PaidUser* loginedPaidUser = Login(paidUsers, 4, login, password);

    cout << "Signed in as: " << loginedPaidUser->GetLogin() << endl; */   
    for (int i = 0; i < 4; i++) 
    { 
        delete users[i]; 
    }  
    delete[] users;

    //for (int i = 0; i < 4; i++) 
    //{
    //    delete paidUsers[i];
    //}  
    //delete[] paidUsers;

    return 0;
}
