#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "User.hpp"
#include "Post.hpp"
#include "Poll.hpp"

using namespace std;

class UserPage: public User{
private:

    vector<Post> Posts;
    vector<Poll> Polls;
    User* Owner;

public:

    UserPage();

    UserPage(User* Owner);

    unsigned int PostsAmount();

    void AddPost(Post& NewPost);

    void DeletePost(Post& WrongPost);

    void AddPoll(Poll& NewPoll);

    unsigned int PollsAmount();

    void DeletePoll(Poll& WrongPoll);

};