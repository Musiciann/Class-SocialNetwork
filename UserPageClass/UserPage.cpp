#include <iostream>
#include <string>
#include <vector>
#include "User.hpp"
#include "Post.hpp"
#include "Poll.hpp"
#include "BlockList.hpp"
#include "UserPage.hpp"

using namespace std;

    vector<Post> Posts;
    vector<Poll> Polls;
    BlockList* Block;
    User* Owner;

    UserPage::UserPage(){
        Owner = nullptr;
    }

    UserPage::UserPage(User* Owner){
        this->Owner = Owner;
    }

    unsigned int  UserPage::PostsAmount(){
        return Posts.size();
    }

    void  UserPage::AddPost(Post& NewPost){
        Posts.push_back(NewPost);
    }

    void  UserPage::DeletePost(Post& WrongPost){
        int Counter = 0;
        for (auto Post:Posts){
            if(Post == WrongPost){
                Posts.erase(Posts.begin() + Counter);
                return;
            }
            Counter++;
        }
    }

    void  UserPage::AddPoll(Poll& NewPoll){
        Polls.push_back(NewPoll);
    }

    unsigned int  UserPage::PollsAmount(){
        return Polls.size();
    }

    void  UserPage::DeletePoll(Poll& WrongPoll){
        int Counter = 0;
        for (auto Poll:Polls){
            if(Poll == WrongPoll){
                Polls.erase(Polls.begin() + Counter);
                return;
            }
            Counter++;
        }
    }
