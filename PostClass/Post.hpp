#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "Comment.hpp"

using namespace std;

class Post:protected SocialNetwork {
private:

    string CreationDate;
    string AuthorLogin;
    string PostContent;
    unsigned int PostLikesCounter;

    vector<Comment> Comments;

public:

    Post(string CreationDate, string AuthorLogin, string Content);

    bool operator == (Post& CurrentPost);

    string GetContent();

    unsigned int LikesAmount();

    unsigned int GetCommentsAmount();

    void DeleteComment(string Content);

    void LeaveComment(Comment* NewComment);

    void LikePost();
};
