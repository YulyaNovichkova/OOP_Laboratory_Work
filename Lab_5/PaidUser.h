#pragma once
#include <iostream>
#include "Post.h"
#include "User.h"

using namespace std;

class PaidUser : public User
{
	Post* _posts;  
	int _postsCount;

public:  
	void SetPosts(Post* posts, int postsCount);

	Post* GetPosts();  
	int GetPostsCount();

	PaidUser();
	PaidUser(int id, string login, string password, Post* posts, int postsCount);  
	PaidUser(int id, string login, string password);  
};