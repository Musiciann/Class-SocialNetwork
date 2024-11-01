#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "/home/maksim/Рабочий стол/SocialNetwork/Source/Comment.hpp"

using namespace std;

    string Content;
    User* CommentAuthor;
    unsigned int LikesCounter;

    Comment::Comment(string Content, User* CommentAuthor):CommentAuthor(CommentAuthor){
        this->Content = Content;
        LikesCounter = 0;
    }

    void Comment::LikeComment(){
        LikesCounter++;
    }

    unsigned int Comment::GetLikesAmount(){
        return LikesCounter;
    }

    string Comment::GetContent(){
        return Content;
    }
