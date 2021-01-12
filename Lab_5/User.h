#pragma once
#include <iostream>

using namespace std;

class User 
{
	int _id;  
	string _login;  
	string _password;

	void SetId(int id);   
public:  
	void SetLogin(string login);  
	void SetPassword(string password);    

	int GetId();  
	string GetLogin();  
	string GetPassword();
	
	User();
	User(int id, string login, string password);  
	bool IsCorrectPassword(string password);
};

User* Login(User** users, int usersCount, string enteredLogin, string enteredPassword);