#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "User.h"
#include "PaidUser.h"
#include "Product.h"
#include "DiscountBase.h"
#include "PercentDiscount.h"
#include "CertificateDiscount.h"

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

    User** allUsers = new User * [] 
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

    string login = "megazver";  
    string password = "password";  
    User* loginedUser = Login(allUsers, 8, login, password);

    cout << "Signed in as: " << loginedUser->GetLogin() << endl; 

    login = "system_exe";
    password = "UgfkDGmU";
    User* loginedPaidUser = Login(allUsers, 8, login, password);

    cout << "Signed in as: " << loginedPaidUser->GetLogin() << endl;

    for (int i = 0; i < 4; i++) 
    { 
        delete allUsers[i];
    }  
    delete[] allUsers;

    Product* product = new Product();
    product->SetName("Nina Ricci");
    product->SetCategory(Perfume);
    product->SetCost(3500);

    PercentDiscount* discount = new PercentDiscount(Perfume, 10);
    cout << endl << discount->Calculate(product) << endl;

    CertificateDiscount* certificate = new CertificateDiscount(Perfume, 1000);
    cout << endl << certificate->Calculate(product) << endl;

    delete product;
    delete discount;
    delete certificate;

    const int COUNT = 5;
    Product* products = new Product[COUNT];

    products[0] = Product("Nina Ricci", Perfume, 3500);
    products[1] = Product("Organic shop", Serum, 450);
    products[2] = Product("Miko", Mask, 238);
    products[3] = Product("Sandy shore", Scrub, 99);
    products[4] = Product("Old Spice", Shampoo, 321);

    cout << endl;
    DiscountBase* discont1 = new PercentDiscount(Perfume, 10);
    ShowCheckWithDiscount(discont1, products, COUNT);

    cout << endl << endl;
    DiscountBase* discont2 = new CertificateDiscount(Perfume, 1000);
    ShowCheckWithDiscount(discont2, products, COUNT);

    delete[] products;
    delete discont1;
    delete discont2;

    return 0;
}
