#include <iostream>
#include <string>
#include <vector>
#include "SocialNetwork.hpp"
#include "User.hpp"
#include "Comment.hpp"
#include "Post.hpp"


using namespace std;

    string CreationDate;
    string AuthorLogin;
    string PostContent;
    unsigned int PostLikesCounter;

    vector<Comment> Comments;

    Post::Post(string CreationDate, string AuthorLogin, string Content){
        this->CreationDate = CreationDate;
        this->PostContent = Content;
        this->PostLikesCounter = 0;
        this->AuthorLogin = AuthorLogin;
    }

    void Post::LikePost(){
        PostLikesCounter++;
    }

    bool Post::operator == (Post& CurrentPost){
        if(this->CreationDate == CurrentPost.CreationDate &&
        this->AuthorLogin == CurrentPost.AuthorLogin &&
        this->PostContent == CurrentPost.PostContent) return true;
        return false;
    }

    string Post::GetContent(){
        return PostContent;
    }

    unsigned int Post::LikesAmount(){
        return PostLikesCounter;
    }

    unsigned int Post::GetCommentsAmount(){
        int Counter = 0;
        for(auto Comment:Comments){
        Counter++;
        }
        return Counter;
    }

    void Post::DeleteComment(string Content){
        int Counter = 0;
        for(auto Comment:Comments){
            if(Comment.GetContent() == Content){
                Comments.erase(Comments.begin() + Counter);
                return;
            }
        Counter++;
        }
    }

    void Post::LeaveComment(Comment* NewComment){
        Comments.push_back(*NewComment);
    }

