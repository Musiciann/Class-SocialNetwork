#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"

using namespace std;

class Comment:private SocialNetwork{
private:

    string Content;
    User* CommentAuthor;
    unsigned int LikesCounter;

public:

    Comment(string Content, User* CommentAuthor);

    void LikeComment();

    string GetContent();

    unsigned int GetLikesAmount();

};